//write program to sort elements of an array of size 10.take array values from user.
#include<stdio.h>
int main ()
{
   int a[10];
   int i, j, temp,round;
   printf("Enter the elements:");
   for (i = 0; i < 10; i++)
      scanf("%d", &a[i]);
   for (round = 1; round<=9; round++)
   {
      for (i=0; i<=9-round; i++)   //this is a bubble sort algorithm
      {
        if (a[i] > a[i+1])
        {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
      }
   }
   printf("The sorted array is:");
   for (i = 0; i<=9; i++)
        printf("%d ", a[i]);
   return 0;
}