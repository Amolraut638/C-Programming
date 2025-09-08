//write a function to check whether given number contains given digit or not.(TSRS)
#include<stdio.h>
int checkDigit(int,int);
int main()
{
    int a, b;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the digit:");
    scanf("%d",&b);
    //printf("%d",checkDigit(a,b));
    if(checkDigit(a,b)==1)
    printf("Digit is present in given number");
    else
    printf("Digit is not present in given number");
    return 0;
}
int checkDigit(int n,int digit)
{
    while(n)
    {
        if(n%10==digit)
          return 1;
        n=n/10;
    }  
    return 0;
} 