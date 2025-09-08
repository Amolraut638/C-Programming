//write a program to input a three digit number and display the sum of digits
/*
#include<stdio.h>
int main()
{
 int a,b,sum=0;
 printf("Enter the number:");
 scanf("%d",&a);
 while(a>0)
 {
 b=a%10;     // ip=123 op=3
 sum=sum+b;
 a=a/10;     //ip=123  op=12
 }
 printf("The sum of the digits of given number is %d",sum);
 return 0;
}

*/
#include<stdio.h>
int main()
{
 int a;
 printf("Enter the three digit number:");
 scanf("%d",&a);
 
 printf("The sum of the digits of given number is %d",a/10/10 + a/10%10 + a%10);
 return 0;
}