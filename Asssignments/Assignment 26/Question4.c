//write a recursive function to print binary of a given decimal number.
#include<stdio.h>
void decTooctal(int n)
{
    if(n>0){
        decTooctal(n/8);
        printf("%d",n%8);
    }
}

int main()
{
    decTooctal(25);
    return 0;
}