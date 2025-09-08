//write a program to print all prime numbers between two given numbers
#include <stdio.h>
 
int main()
{
  int i , j , min , max;
  printf("Enter the minimum number:");
  scanf("%d",&min);
  printf("Enter the maximum number:");
  scanf("%d",&max);

    for(i=min;i<=max;i++)
    {
        for(j=2;j<=max;j++)
        {
          if(i%j==0)
          break;
        }
        if(i==j)
        {
          printf("%d ",i);
        }
    }
    return 0;
}