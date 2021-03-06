#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double);
double pop(void);

int getch(void);
void ungetch(int);
int getop(char[]);

/* reverse Polish calculator */
main() {
  int type;
  double op2;
  char s[MAXOP];
  while ((type = getop(s)) != EOF) {
    switch (type) {
    case NUMBER:
      push(atof(s));
      break;
    case '+':
      push(pop() + pop());
      break;
    case '*':
      push(pop() * pop());
      break;
    case '-':
      op2 = pop();
      push(pop() - op2);
      break;
    case '/':
      op2 = pop();
      if (op2 != 0.0)
        push(pop() / op2);
      else
        printf("error: zero divisor\n");
      break;
    case '\n':
      printf("\t%.8g\n", pop());
      break;
    case '%':
      op2 = pop();
      if (op2 != 0.0) {
        int res = fmod(pop(), op2);
        push((res * op2 < 0) ? res + op2 : res);
      }
      break;
    default:
      printf("error: unknown command %s\n", s);
      break;
    }
  }
  return 0;
}

void push(double f) {
  if (sp < MAXVAL)
    val[sp++] = f;
  else
    printf("error: stack full, can't push %g\n", f);
}

/* pop: pop and return top value from stack */
double pop(void) {
  if (sp > 0)
    return val[--sp];
  else {
    printf("error: stack empty\n");
    return 0.0;
  }
}

/* getop: get next character or numeric operand */
int getop(char s[]) {
  int i, c;
  while ((s[0] = c = getch()) == ' ' || c == '\t')
    ;
  s[1] = '\0';
  if (!isdigit(c) && c != '.')
    return c;
  /* not a number */
  i = 0;
  if (isdigit(c))
    /* collect integer part */
    while (isdigit(s[++i] = c = getch()))
      ;
  if (c == '.')
    /* collect fraction part */
    while (isdigit(s[++i] = c = getch()))
      ;
  s[i] = '\0';
  if (c != EOF)
    ungetch(c);
  return NUMBER;
}

#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;

int getch(void) /* get a (possibly pushed-back) character */
{
  return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c)
/* push character back on input */
{
  if (bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}
