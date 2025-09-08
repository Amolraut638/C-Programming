//Write a program to swap values of two int variables
#include<stdio.h>

int main()
{
    int a , b ,temp ;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second numbes:");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;
    
    printf("After swapping first number is %d\n",a);
    printf("After swapping second number is %d\n",b);

    return 0;
}