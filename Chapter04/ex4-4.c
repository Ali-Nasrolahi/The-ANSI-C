#include <stdio.h>

#define MAXVAL 100

unsigned int sp = 0;
double val[MAXVAL];

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

double print_top(void) { return val[sp]; }

void duplicate(void) { push(pop()); }

void swap_top(void) {
  double op1 = pop(), op2 = pop();
  push(op2), push(op1);
}

main() { return 0; }
