//write a program to print first N term of the fibonacci series
#include<stdio.h>
int main()
{  
    int a=-1,b=1,c,n;
    printf("Enter the number:");
    scanf("%d",&n);

    while(n)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        n--;
    }
    printf("\n");

    return 0;
}