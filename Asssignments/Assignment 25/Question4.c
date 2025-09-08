//write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void printOddreverse(int n){
  if(n>0){
    printf("%d ",2*n-1);
    printOddreverse(n-1);
  }
}

int main(){
  printOddreverse(10);
  return 0;
}
