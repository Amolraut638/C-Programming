//write a program to find the greatest among three given numbers.
//print number once if the greatest number appear for two or three times
#include<stdio.h>
int main()
{
  int num1 , num2, num3;
  printf("Enter the first number :");         //
  scanf("%d",&num1);
  printf("Enter the second number :");
  scanf("%d",&num2);
  printf("Enter the third number :");
  scanf("%d",&num3);

  //num1>num2 ? num1>num3?printf("%d is greatest",num1):printf("%d is greatest",num3) : num2>num3?printf("%d is greatest",num2):printf("%d is greatest",num3);
  printf("%d",num1>num2? num1>num3?num1:num3  :  num2>num3?num2:num3);
  return 0;
}  