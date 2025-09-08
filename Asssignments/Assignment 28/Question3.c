//write recursive function to print first N terms of fibonacci series.
#include<stdio.h>
int fib(int n)
{
    if(n==0 || n==1)
        return n;
    return fib(n-1)+fib(n-2);
}
void printFib(int n)
{
    if(n>=0)
    {
        printFib(n-1);
        printf("%d ",fib(n));
    }
}

int main()
{
    printFib(10);
    return 0;
}