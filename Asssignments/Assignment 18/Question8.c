/*
print the following pattern

*******
*** ***
**   **
*     *

*/
#include<stdio.h>
int main()
{
    int i , j ;
    for(i=1;i<=4;i++)

       {
        for(j=1;j<=7;j++)
           {
            if(j<=5-i || j>=3+i)
            printf("*");
            else
            printf(" ");
           }
           printf("\n");
        }
    for(i=4;i>=1;i--)  //other half part starts here

       {
        for(j=1;j<=7;j++)
           {
            if(j<=5-i || j>=3+i)
            printf("*");
            else
            printf(" ");
           }
           printf("\n");
        }
        printf("\n");
   
    

    return 0;
}