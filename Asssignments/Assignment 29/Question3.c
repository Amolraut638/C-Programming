//write a program to calculate the sum of all even numbers and sum of all odd numbers stored in array size of 10.take array values from user.
#include<stdio.h>

int main()
{
    int a[10],i,sum1=0,sum2=0;
    printf("Enter 10 values:");
    for(i=0;i<=9;i++)
       scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    { 
        if(a[i]%2==0)
        sum1=sum1+a[i];
        else
        sum2=sum2+a[i];
    }   
    printf("The sum of even numbers are %d\n",sum1);   
    printf("The sum of odd numbers are %d",sum2);
    return 0;
}