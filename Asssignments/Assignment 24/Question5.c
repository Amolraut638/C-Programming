//write a function to find the sum of first N terms of the series 1!/1+2!/2+3!/3+4!/4+.......+n!/n.(TSRS)
#include<stdio.h>

int factorial(int n){
   int factorial = 1;
   while(n){
      factorial = factorial * n;
      n--;
   }
   return factorial;
 }

 int seriesSum(int n){
   int i, s=0;
   for(i=1;i<=n;i++)
      s=s+factorial(i)/i;
   return s;
 }

 int main(){
   int x;
   printf("Enter the number:");
   scanf("%d",&x);
   printf("%d",seriesSum(x));
   return 0;
 }
