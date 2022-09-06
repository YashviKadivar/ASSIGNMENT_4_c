/* Write a program to print cubes of the first 10 natural numbers. */

#include<stdio.h>

int main()
{
    int i,ans;

    for(i=1;i<=10;i++)
    {
        ans=i*i*i;;
        printf("%d \n",ans);
    }

    return 0;
}
