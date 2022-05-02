#include <ctype.h>
#include <stdio.h>
#include <string.h>

int atoi(char s[]) {

  int val, power, i, sign, len = strlen(s);

  for (i = 0; isspace(s[i]); i++) /* skip white space */
    ;
  sign = (s[i] == '-') ? -1 : 1;

  if (s[i] == '+' || s[i] == '-')
    i++;

  for (val = 0; isdigit(s[i]); i++)
    val = 10 * val + (s[i] - '0');
  return val;
}

/* atof: convert string s to double */
double atof(char s[]) {
  double val, power;
  int j, i, sign, neg = -1, len = strlen(s);
  char tmp[100];

  for (i = 0; isspace(s[i]); i++) /* skip white space */
    ;
  sign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-')
    i++;
  for (val = 0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i] - '0');
  if (s[i] == '.')
    i++;
  for (power = 1.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
    power *= 10;
  }

  if (i == len)
    return sign * val / power;

  val *= sign / power;
  if (s[i] == 'E' || s[i] == 'e') {
    if (s[++i] == '-')
      neg = 1, i++;
    strncpy(tmp, s + i, sizeof tmp);

    for (j = 0, power = 1.0; j < atoi(tmp); j++) {
      power *= 10;
    }
    if (neg > 0) {
      return val / power;
    }
    return val * power;

  } else
    return 0;
}

main() {
  char s[555] = "1245.55e-2";
  printf("%f\n", atof(s));
}