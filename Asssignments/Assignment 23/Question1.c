//write a function to calculate the LCM of two numbers.(TSRS)
#include<stdio.h>
int lcm(int ,int );
int main()
{
    int max,a,b;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    max=lcm(a,b);
    printf("The LCM of %d and %d is %d ",a,b,max);

    return 0;
}
int lcm(int n1,int n2)
{
    int max;
    for(max=(n1>n2)?n1:n2;max<n1*n2;max++)
        if(max%n1==0 && max%n2==0)
        break;
    return max;
}