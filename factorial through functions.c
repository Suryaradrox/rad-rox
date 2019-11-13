/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int factorial (int x);
int
main ()
{
  int f, p;
  printf ("give value of p =");
  scanf("%d",&p);
  f = factorial (p);
  printf ("factorial of p is %d", f);
  return 0;
}

int
factorial (int x)
{
  int l, i, p;
  i = l = 1;
  while (i <= p)
    {
      l = l * i;
      i = i + 1;
    }
  return l;
}
