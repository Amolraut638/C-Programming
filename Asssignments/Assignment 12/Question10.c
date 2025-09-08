//write a program to print table of N
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the value of n :");
    scanf("%d",&n);
    while(i<=10)
    {
    printf("%d\n",i*n);
    i++;
    }

    return 0;
}