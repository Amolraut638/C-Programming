//write a program to calculate the average of the number stored in array size of 10.take array values from user.
#include<stdio.h>

int main()
{
    int a[10],i,sum,avg;
    printf("Enter 10 values:");
    for(i=0;i<=9;i++)
       scanf("%d",&a[i]);
    for(i=0,sum=0;i<=9;i++)
        sum=sum+a[i];
    avg=sum/10.0;
    printf("The avg of 10 elements is %d",avg);
    return 0;
}