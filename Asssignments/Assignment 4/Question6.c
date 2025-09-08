//write a program to swap the values of two int variables without using third variable and + , - operators.
#include<stdio.h>

int main()
{
    int a , b ;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second numbes:");
    scanf("%d",&b);


    a = a ^ b;    //a=a*b;
    b= a ^ b;     //b=a/b;
    a = a ^ b;    //a=a/b;

    printf("After swapping first number is %d\n",a);
    printf("After swapping second number is %d\n",b);

    return 0;
}