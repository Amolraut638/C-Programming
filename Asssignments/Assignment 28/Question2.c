//write a recursive function to calculate the HCF of two numbers.
#include<stdio.h>
int hcf(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
            return b;
        return hcf(a%b,b);
    }
    else
    {
        if(b%a==0)
            return a;
        return hcf(a,b%a);
    }
}
int main()
{
    int x,y;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    printf("%d",hcf(x,y));
    return 0;
}