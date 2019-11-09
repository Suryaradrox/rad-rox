/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int f,i,n;
    printf("give value of n");
    scanf("%d",&n);
    i=f=1;
    while(i<=n)
    {
        f=f*i;
        i=i+1;
    }
    printf("factorial of n is %d",f);

    return 0;
}
