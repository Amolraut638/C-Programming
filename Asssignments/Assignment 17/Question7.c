//print following pattern
/*
A B C D E
  A B C D
    A B C
      A B
        A
*/
#include<stdio.h>
int main()
{
    int i , j , k;
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=5;j++)
        {
            if(j>=i && j<=5)
            {
              printf("%c",k);
              k++;
            }
            else
             printf(" ");
            
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}