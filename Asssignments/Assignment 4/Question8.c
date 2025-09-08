#include <stdio.h>
int main()
{
    int x , y ;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("Enter the second numbes:");
    scanf("%d",&y);
    printf("Before swapping values of x and y are %d and %d\n",x,y);
    (x ^= y), (y ^= x), (x ^= y);
    printf("After Swapping values of x and y are  %d and %d", x,y);
    return 0;
}