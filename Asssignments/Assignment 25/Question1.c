//write a recursive function to print first N natural numbers
#include<stdio.h>
void printN(int n)
{
  if(n>0)
    printN(n-1);
  printf("%d ",n);
}

int main()
{
  printN(6);
  return 0;
}

/*
1.printN(n):1 2 3 4 5.....n
2.printN(n-1):1 2 3 4.....n-1
      printf("%d",n);   n
3.n==0
*/