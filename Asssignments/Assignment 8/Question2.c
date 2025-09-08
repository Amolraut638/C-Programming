//write a program to print greater between two numbers.print one number if both are  the same
#include<stdio.h>
int main()
{
   int a , b ;
   printf("Enter the first number :");
   scanf("%d",&a);
   printf("Enter the second number :");
   scanf("%d",&b);

   if(a>b)
   printf("%d is greater than %d",a,b);
   else if (b>a)
   printf("%d is greater than %d",b,a);
   else
   printf("The entered numbers are same and the number is %d",a);
   
   return 0;
}