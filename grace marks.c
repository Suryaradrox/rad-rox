/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//grace marks of a student
#include <stdio.h>

int
main ()
{
  int n, x, i, g, G;
  printf
    (" give total no. of subjects\ngive the no. fo subjects the student failed in\nthe class with which he passed");
  scanf ("%d%d%d", &n, &x, &i);
  switch (i)
    {
    case 1:
      if (x > 3)
	{
	  printf ("no grace marks");
	  g = 0;
	}
      else
	{
	  printf ("grace marks are 5 per subject");
	  g = 5;
	}
      break;
    case 2:
      if (x > 2)
	{
	  printf ("no grace marks");
	  g = 0;
	}
      else
	{
	  printf ("grace marks are 4 per subject");
	  g = 4;
	}
      break;
    case 3:
      if (x > 1)
	{
	  printf ("no grace marks");
	  g = 0;
	}
      else
	{
	  printf ("grace marks are 5 per subject ");
	  g = 5;
	}
    }

  G = n * g;
  printf ("total no. of grace marks are %d", G);
  return 0;
}
