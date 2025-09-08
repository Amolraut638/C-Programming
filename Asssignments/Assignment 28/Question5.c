//write a recursive function to calculate the power of any given number
#include<stdio.h>
double power(double x,double y)
{
    if(y==0)
        return 1;
    if(y>=0)
        return x*power(x,y-1);
    else
        return 1/x*power(x,y+1);
}
int main()
{
    printf("%lf",power(2,5));
    return 0;
}