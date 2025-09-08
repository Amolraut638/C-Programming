//write a c program to count the digits of a given number using recursion.
#include<stdio.h>
int countDigits(int n)
{
    if (n==0)
        return 0;
    return countDigits(n/10)+1;  //this +1 is for n being always 1 not 0 so that if condition is not run 
}
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("%d",countDigits(x));
    return 0;
}