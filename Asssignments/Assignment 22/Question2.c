//write a function to calculate the number of combinations one can make from n items and r selected at a time(TSRS)
#include <stdio.h>
int factorial(int);
int nCr(int,int);

int main() {
    int n , r;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);
    printf("%d", nCr(n, r));
    return 0;
}
 
int factorial(int n) {
      if(n == 0)
      return 1;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
 
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
 
