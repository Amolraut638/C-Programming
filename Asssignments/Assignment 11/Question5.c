//write a program to print first 10 odd natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i=10;
    while(i>0)
    {
        if(i%2!=0)
            printf("%d\n",i);
        i--;
    }
    return 0;
}