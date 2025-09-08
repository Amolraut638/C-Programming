//write a program to calculate the sum of N odd natural numbers
#include <stdio.h>  

int main() {
    int i, n, sum ;  

    printf("Input number : ");  
    scanf("%d", &n);  

    for(i=1,sum=0;i<=n;i++)
       sum=sum+2*i-1;

    printf("\nThe Sum of Odd Natural Number up to %d terms : %d\n", n, sum);  


    return 0;  
}

