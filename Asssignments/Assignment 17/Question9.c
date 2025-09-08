//print following pattern
/*

A B C D E
  B C D E
    C D E 
      D E
        E

*/
#include<stdio.h>
int main()
{
    int i , j ,k;
    for(i=1;i<=5;i++)
    {
        k=64+i;
        for(j=1;j<=5;j++)
        {
            if(j>=i && j<=5)
            printf("%c",k++);
            else
            printf(" ");
        }

        printf("\n");
    }
    printf("\n");
    return 0;
}
