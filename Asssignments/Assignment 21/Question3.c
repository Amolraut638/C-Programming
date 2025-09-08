//write a function to check whether given number is even or odd.return 1 if the number is even otherwise return 0.(TSRS)
#include<stdio.h>
int even_odd(int);
int main()
{
    int x,y;
    printf("Enter the number:");
    scanf("%d",&x);
    y=even_odd(x);
    if(y==0)
    printf("Even");
    else
    printf("Odd");
    
    return 0;
}
int even_odd(int a)
{
    int r;
    r=a%2;
    return r;
}
