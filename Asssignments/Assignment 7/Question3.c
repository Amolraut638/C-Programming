//Write a program to check whether the given number is a even number or a odd number
#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number :");
   scanf("%d",&n);

   if(n%2==0)
     printf("%d is a Even number !",n);
   else 
    printf("%d is a Odd number !",n ); 

    return 0;
}