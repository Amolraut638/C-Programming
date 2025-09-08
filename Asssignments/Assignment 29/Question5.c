//write a program to find smallest number stored in array of size 10.take array values from user
#include<stdio.h>
int main()
{
    int a[10],i,min;
    printf("Enter the 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    min=a[0];
    for(i=0;i<=9;i++)
       if(min>a[i])
       {
        min=a[i];
       }
    printf("The smallest element in array  is %d", min);
       
    return 0;
}