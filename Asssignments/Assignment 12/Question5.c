//write a program to print first N odd natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the value of n :");
    scanf("%d",&n);
    while(n>0)
    {
        if(n%2!=0)
        {
        printf("%d\n",n);
        }
        n--;
    
    }
    return 0;
}