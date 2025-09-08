//write a program to find the Nth term of the fibonacci series
#include<stdio.h>
int main()
{   int a=-1,b=1,c,n,d;
    printf("Enter the number:");
    scanf("%d",&n);
    d=n;//n ki value decrement ho rahi hogi to hum use use nhi kar sakte isliye d variable me pehle usko store kiya 

    while(n)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    //c me nth term hai
    printf("the %dth term in fibonacci series is %d",d,c);
    printf("\n");

    return 0;
}

/* fibbonacci series starts from 0 and then 1. in fibbo series the next number is the addition of last two numbers */