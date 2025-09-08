//write a program to check whether given two numbers are co-prime numbers or not
#include<stdio.h>

int main()
{
    int n1 ,n2 , i;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    for(i = n1>n2? n1 : n2 ; i>=1 ; i--)
    {
        if(n1%i==0 && n2%i==0)
        break;
    }
    if(i==1)
    printf("%d and %d are co-prime numbers ",n1,n2);
    else
    printf("%d and %d are not co-prime numbers ",n1,n2);

    return 0;
}    

/* jis do number ka HCF 1 hota hai unko co-prime numbers kehte hain */