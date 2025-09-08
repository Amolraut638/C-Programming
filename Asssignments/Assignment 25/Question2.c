//write a recursive function to print first N natural numbers in reverse order.
#include<stdio.h>

void printNreverse(int n){
    if(n>=0){
      printf("%d ",n);
      printNreverse(n-1);
  }
}

int main(){
  printNreverse(6);
  return 0;
}