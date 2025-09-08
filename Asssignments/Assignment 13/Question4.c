//write a program to calculate sum of squares of N natural numbers
#include <stdio.h>  

int main() {
    int i, n, sum ;  

    printf("Input number : ");  
    scanf("%d", &n);  

    for(i=1,sum=0;i<=n;i++)
       sum=sum+i*i;


    printf("\nThe Sum of squares of natural Number up to %d terms : %d\n", n, sum);  


    return 0;  
}

