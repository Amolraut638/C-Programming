//write a recursive function to calculate the sum of squares of first N natural numbers
#include<stdio.h>
int sumNSquares(int n)
{
    if(n==1)
       return 1;
    return n*n+sumNSquares(n-1);

}
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("%d",sumNSquares(a));
    return 0;
}