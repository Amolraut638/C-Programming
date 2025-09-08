//write a program to calculate the factorial of a number
#include<stdio.h>
int main()
{
    int num, fact=1 , i;
    printf("Enter the number:");
    while(scanf("%d",&num) != 1)
        {
        printf("invalid ! enter the valid number :");
        while(getchar() != '\n');
        }
    for(i=1;i<=num;i++)
    {
    fact=fact*i;
    }
    printf("The factorial of %d is %d",num,fact);
    
    return 0;
}

