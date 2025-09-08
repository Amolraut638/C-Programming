//write a program to check whether the roots of a given quadratic equations are real and disticnt,real and equal or imaginary roots
#include<stdio.h>
int main()
{
   int a , b , c , d;
   printf("a :");
   scanf("%d",&a);
   printf("b :");
   scanf("%d",&b);
   printf("c :");
   scanf("%d",&c);
   
   d=b*b-4*a*c;

   if(d>0)
   printf("The roots are real and distinct");
   else if (d==0)
   printf("The roots are real and equal");
   else
   printf("The roots are imaginary");
   
   return 0;
}