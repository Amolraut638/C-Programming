//write a program to input a character from user and print its ascii code
#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character :");
    scanf("%c",&ch);

    printf("The ascii value of the character %c is : %d",ch,ch);
    return 0;
}