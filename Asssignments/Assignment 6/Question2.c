//write a program to take the three digit number from user and rotate its digit by one position towards right
#include<stdio.h>
int main()
{
   int a;
   printf("Enter the three digit number :");
   scanf("%d",&a);

   printf("The right rotated number is %d\n",a % 10 * 100 + a / 10);    //towards right
   printf("The left rotated number is %d",(a / 10 % 10 * 100) + (a % 10 * 10) + (a / 10 / 10));  //towards left
   return 0;
}