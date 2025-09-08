//write a program to print a given number without its last digit
#include<stdio.h>

int main()
{
    int number ,num;
    printf("Enter the number :");
    scanf("%d",&number);

    num=number/10;
    printf("The given number %d without last digit is %d ",number,num);
    return 0;


}