//write a program to calculate the HCF of two numbers
#include <stdio.h>

int main()
{
    int n1 , n2 , i;
    printf("Enter two numbers n1 and n2:");
    scanf("%d %d",&n1,&n2);
    for(i = n1>n2 ? n1 : n2 ; i>=1 ; i--)
    {
        if(n1%i==0 && n2%i==0)
        break;
    }
    printf("HCF of Two numbers is: %d",i);
    return 0;
}

/*
HCF is the highest common factor
4 - 1, 2, 4
6 - 1, 2, 3, 6
common factors are 1 and 2 so the highest is 2
1 <= hcf(a,b) <= min(a,b)
*/