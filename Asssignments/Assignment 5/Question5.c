//write a program to input number from user and also input a digit.append the digit to number and print the resulting number
//eg. input=123 and 4  output=1234
#include<stdio.h>
int main()
{
    int num , digit ;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the digit:");
    scanf("%d",&digit);
    
    num = num * 10 + digit;
    printf("%d",num);
    return 0;    
}