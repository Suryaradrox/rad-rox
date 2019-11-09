/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x,i,n,p,r,o;
    printf("enter no. of numbers to be entered:");
    scanf("%d",&n);
    p=r=o=i=0;
    while(i<n)
    {
        printf("enter numbers");
        scanf("%d",&x);
        if(x>0)
        p=p+1;
        if(x<0)
        r=r+1;
        if(x==0)
        o=o+1;
    i=i+1;
    }
    printf("values of p,r,o are%d%d%d",p,r,o);
    


    return 0;
}
