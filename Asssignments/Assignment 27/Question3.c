//write a recursive function to calculate the sum of first N Even natural numbers
#include<stdio.h>
int sumNEven(int n)
{
    if(n==1)
       return 2;
    return 2*n+sumNEven(n-1);

}
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("%d",sumNEven(a));
    return 0;
}