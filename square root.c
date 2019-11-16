#include <stdio.h>
#include<math.h>
//square root function(ax^2+bx=c)
int
main ()
{
  int a, b, c, y;
  float x1, x2,d;
  printf ("give values of a,b and c:");
  scanf ("%d%d%d", &a, &b, &c);
  y = b * b - 4 * a * c;
  d = sqrt (y);
  x1 = (-b + d) / (2 * a);
  x2 = (-b - d) / (2 * a);
  printf ("square roots of the given eqn are %4.2f and %4.2f", x1, x2);
  return 0;
}
