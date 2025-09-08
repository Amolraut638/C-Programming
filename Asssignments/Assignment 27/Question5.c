//write a recursive function to calculate the sum of digits of a number
#include<stdio.h>
int sumDigit(int n)
{
    if(n==1)
       return 1;
    return n%10+sumDigit(n/10);

}
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("%d",sumDigit(a));
    return 0;
}