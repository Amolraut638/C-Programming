//write a function to print the given number is prime or not.(TSRS)
#include<stdio.h>
int isprime(int);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(isprime(n)==0)
    printf("Not prime");
    else
    printf("Prime");
    return 0;
}
int isprime(int x)
{
    int i;
    if(x<=1)
    return 0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        return 0;
        break;
    }
    if(i==x)
    return 1;
}