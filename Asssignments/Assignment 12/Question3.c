//write a program to print first N natural numbers in reverse order
#include<stdio.h>
int main()
{   
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n>0)
    {
        printf("%d\n",n);                             //2*n+1-2*i
        n--;
    }
    return 0;
}