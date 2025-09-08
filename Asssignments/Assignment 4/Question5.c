//Write a program to swap values of two int variables without using third variable
#include<stdio.h>

int main()
{
    int a , b ;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second numbes:");
    scanf("%d",&b);  

    a=a-b;  //20-10=10    a=20 b=10
    b=a+b;  //10+10=20    b=20
    a=b-a;  //30-20=10    a=10

    printf("After swapping first number is %d\n",a);
    printf("After swapping second number is %d\n",b);

    return 0;
}