//write a recursive function to print squares of first N natural numbers.
#include<stdio.h>
void printNSquares(int n){
  if(n>0)
    printNSquares(n-1);
  printf("%d ",n*n);
}

int main(){
  printNSquares(6);
  return 0;
}

