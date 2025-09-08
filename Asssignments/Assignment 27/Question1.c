//write a recursive function to calculate the sum of first N natural numbers
#include<stdio.h>
int sumN(int n)
{
    if(n==1)
       return 1;
    return n+sumN(n-1);

}
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("%d",sumN(a));
    return 0;
}