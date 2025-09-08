//write a program to take input as character and print its next character
#include<stdio.h>

int main()
{
  char x;
  printf("Enter the character : ");
  scanf("%c",&x);
  char c=x;
  x++;

  printf("the next character of %c is %c",c,x);
  return 0;

}