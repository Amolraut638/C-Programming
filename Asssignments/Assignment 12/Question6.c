//write a program to print first N even natural numbers
#include<stdio.h>
int main()
{
    int n , i=1;
    printf("Enter the value of n :");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
        printf("%d\n",i);
        }
        i++;
    
    }
    return 0;
}