//write a program to check whether the given number is prime number or not
#include<stdio.h>
int main()
{
    int i , n;
    printf("Enter the number:");
    scanf("%d",&n);

    if(n<=1)
      printf("Invalid number ! pls enter numbers above 1 because all numbers are divisible by 1");

      for(i=2;i<n;i++)
      {
         if(n%i==0)
         {
         printf("%d is not a prime number !",n);
         break;
         }
      } 
      if(i==n)
      printf("%d is a prime number !",n);

    return 0;
}