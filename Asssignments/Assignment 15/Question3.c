//write a program to find next prime number of a given number
#include <stdio.h>
 
int main()
{
    int i, n ;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(n=n+1;  ;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            break;
        }

        if(i==n)
        {
            printf("The next prime number is :%d",n);
            break;
        }
    }
    return 0;
}