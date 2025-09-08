// write a recursive function to calculate the factorial of a number.
#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int x;
    printf("Enter the value of n:");
    scanf("%d",&x);
    printf("%d",fact(x));
    return 0;
}