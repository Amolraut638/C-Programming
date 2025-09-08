//write a recursive function to print first N even natural numbers.
#include<stdio.h>
void printEven(int n){
  if(n>1)
    printEven(n-1);
  printf("%d ",2*n);
}

int main(){
  printEven(10);
  return 0;
}
