/* Write a program to print a table of 5. */

#include<stdio.h>

int main()
{
    int i,ans;

    for(i=1;i<=10;i++)
    {
        ans=5*i;
        printf("\n 5 * %d = %d",i,ans);
    }

    return 0;
}
