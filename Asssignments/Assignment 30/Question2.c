//write a program to find the second largest in an array.take array values from the user    
#include<stdio.h>
int main ()
{
   int a[100];
   int i,n,max,secondmax;
   printf("Enter the elements:");
   for (i = 0; i <=9; i++)
      scanf("%d", &a[i]);

   max=a[0];
   if(max<a[1])
   {
      secondmax=max;
      max=a[1];  
   }
   else
      secondmax=a[1];

   for(i=2;i<=9;i++)
   {
      if(a[i]<=secondmax)
         continue;
      if(a[i]<=max)
      {
         secondmax=a[i];
         continue;
      }
      secondmax=max;
      max=a[i];
   }
   printf("The second max is %d",secondmax);
   return 0;
}