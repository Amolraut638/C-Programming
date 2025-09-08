//write a recursive function to print first N odd natural numbers.
#include<stdio.h>
void printOdd(int n){
  if(n>1)
    printOdd(n-1);
  printf("%d ",2*n-1);
}

int main(){
  printOdd(10);
  return 0;
}
