//write a program to copy the elements of one array into another array.take array values from user.
#include<stdio.h>
int main ()
{
   int i,a[10],b[10];
   printf("Enter the elements:");
   for (i = 0; i < 10; i++)
      scanf("%d", &a[i]);
    
    for(i=0;i<=9;i++)
        b[i]=a[i];
    
    for(i=0;i<=9;i++)
    printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<=9;i++)
    printf("%d ",b[i]);
    return 0;
}