//write a recursive function to print first N even natural numbers in reverse order.
#include<stdio.h>
void printEvenreverse(int n)
{
    if(n>0){
      printf("%d ",2*n);
      printEvenreverse(n-1);
    }
}
int main(){
  printEvenreverse(10);
  return 0;
}
