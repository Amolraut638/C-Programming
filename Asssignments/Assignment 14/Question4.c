//write a program to calculate LCM(Least Common Multiple)of two numbers
#include <stdio.h>

int main() {

    int n1, n2, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    for(max=(n1>n2)?n1:n2;max<n1*n2;max++)
        if(max%n1==0 && max%n2==0)
        break;
    printf("The LCM of %d and %d is %d",n1,n2,max);
    return 0;
}