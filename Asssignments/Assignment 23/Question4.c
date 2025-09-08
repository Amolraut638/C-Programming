//write a function to find next prime number of a given number.(TSRS)
#include<stdio.h>
int nprimenum(int);
int main()
{
    int result,x,n;
    printf("Enter the number:");
    scanf("%d",&x);
    result=nprimenum(x);
    printf("The next prime number is %d",result);
    return 0;
}
int nprimenum(int n)
{
    int i;

    for(n=n+1;  ;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            break;
        }

        if(i==n)
        {
            return n;
            break;
        }
    }
}