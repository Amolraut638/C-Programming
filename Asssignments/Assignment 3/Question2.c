//write a program to input number from user and print its corrosponding ascii value
#include<stdio.h>

int main()
{
  int a;
  printf("Enter ascii code :");
  scanf("%d",&a);

  printf("the character of the ascii code %d is :%c",a,a);
  return 0;

}