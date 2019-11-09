/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int n, r, c, sum = 0, temp;
  printf ("enter the value of n");
  scanf ("%d", &n);
  temp = n;
  while (n > 0)
  {

    r = n % 10;
    c = r * r * r;
    sum = sum + c;
    n = n / 10;
  }
  n = temp;
  if (n == sum)
    printf ("the number is armstrong no");
  else
    printf ("the number is not armstrong no.");
  return 0;
}
