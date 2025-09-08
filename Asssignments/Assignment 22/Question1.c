//write a function to calculate factorial of a number.(TSRS)
#include<stdio.h>
int fact(int);
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    fact(x);
    printf("%d",fact(x));
    return 0;
}
int fact(int a)
{
    int i ,fact=1;
    for(i=1;i<=a;i++)
    {
    fact=fact*i;
    }
    return fact;
}