//write a program to check whether the given number is positive, negative or zero
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int num;
   printf("Enter the number :");
   while(scanf("%d",&num)!= 1)
   {
    printf("Invalid ! please enter a valid integer value :");
    while (getchar() != '\n');

   }

   if(num>0)
    printf("Number is positive!");
   else if(num<0)
    printf("Number is negative!");
   else
    printf("Number is zero");  
    return 0;
} 