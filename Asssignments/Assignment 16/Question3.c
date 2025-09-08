//write a program to find the given number is there in fibonacci series or not
#include<stdio.h>
int main()
{   int a=-1,b=1,c,n;
    printf("Enter the number:");
    scanf("%d",&n);

    while(1)
    {
        c=a+b;
        a=b;
        b=c;
        if(c>=n) // if c is greater than n then break the loop
          break;
    }
    if(c==n)
    printf("%d is found in the series",n);
    else
    printf("%d is not there in series",n);
    printf("\n");

    return 0;
}