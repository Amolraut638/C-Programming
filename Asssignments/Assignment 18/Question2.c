//print following pattern
/*

*******
 *****
  ***
   *
   
*/
#include<stdio.h>
int main()
{
    int i , j ;
    for(i=1;i<=4;i++)
       {
        for(j=1;j<=7;j++)
            {
            if(j>=i && j<=8-i)
            printf("*");
            else
            printf(" ");
           }
           printf("\n");
        }
        printf("\n");
    return 0;
}

/* #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2*n - 1; j++) {
            if (j >= i && j <= 2*n - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
} */
