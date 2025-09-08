//assume the price of 1 USD is INR 84.23.write a program to take amount in INR and convert it in USD
#include<stdio.h>
int main()
{
    float USD=84.23 , INR ,X;
    printf("Enter the amount in INR :");
    scanf("%f",&INR);
    
    X=INR/USD;

    printf("%f",X);
    return 0;
}