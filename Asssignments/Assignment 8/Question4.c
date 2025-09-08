//write a program to check whether the given year is a leap year or not
#include<stdio.h>
int main()
{
   int year;
   printf("Enter the year :");
   scanf("%d",&year);

   if (year%100)
   {
        if(year%4)
           printf("%d is not a leap year",year);
        else
           printf("%d is a leap year",year);
   }
   else
   {
        if(year%400)
           printf("%d is not a leap year",year);
        else
           printf("%d is a leap year",year);
   }

  return 0;
}