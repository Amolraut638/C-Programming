//write a program to print last digit of given number
#include<stdio.h>

int main()
{
    int number,last_digit;
    printf("Enter the num :");
    scanf("%d",&number);

    last_digit = number % 10;
    printf("the last digit of the %d is %d",number,last_digit);
    return 0;
}