//write a program to find greatest number stored in array of size 10.take array values from user
#include<stdio.h>
int main()
{
    int a[10],i,max;
    printf("Enter the 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<=9;i++)
       if(max<a[i])
       {
         max=a[i];
       }
    printf("The largest element in array  is %d",max);
       
    return 0;
}