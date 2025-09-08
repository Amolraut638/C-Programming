//write a program to calculate the sum of numbers stored in array of size 10.take array values from user
#include<stdio.h>

int main()
{
    int a[10],i,sum;
    printf("Enter 10 values:");
    for(i=0;i<=9;i++)
       scanf("%d",&a[i]);
    for(i=0,sum=0;i<=9;i++)
        sum=sum+a[i];
    printf("The sum of 10 elements is %d",sum);
    return 0;
}