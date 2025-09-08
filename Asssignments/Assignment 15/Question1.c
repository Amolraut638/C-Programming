//write a program to print all prime number between 0 to 100
#include <stdio.h>
int main()
{
    int i,j;
    for(i=2;i<=100;i++)
    {
        for(j=2;j<=100;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d ",i);
        }
    }
    return 0;
} 

