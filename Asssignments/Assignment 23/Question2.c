//write a function to calculate HCF of two numbers.(TSRS)
#include<stdio.h>
int hcf(int,int);
int main()
{
    int result,a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    result=hcf(a,b);
    printf("The hcf of %d and %d is %d",a,b,result);
    return 0;
}
int hcf(int n1,int n2)
{
    int i;
    for(i=n1>n2?n1:n2;i>=1;i--)
    {
        if(n1%i==0 && n2%i==0)
        break;
    }
    return i;

}