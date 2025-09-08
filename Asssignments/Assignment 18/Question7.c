//print the following pattern
/*
     1
    1 1
   1 2 1
  1 2 2 1
 1 2 3 2 1

*/
#include<stdio.h>
int main()
{
    int i , j , k ,flag ;
    for(i=1;i<=5;i++)
       {
        k=1;
        for(j=1,flag=1;j<=9;j++)
           {
            if(j>=6-i && j<=4+i)
            { 
                if(flag)
                {
                printf("%d",k);
                j<5?k++:k--;
                }
                else
                {
                    printf(" ");
                    if(j==5)
                    k--;
                }
                flag=1-flag;
            }    
            else
            printf(" ");

           } 
        printf("\n");
        }
    for(i=5;i>=1;i--)//half part starts here
       {
        k=1;
        for(j=1,flag=1;j<=9;j++)
           {
            if(j>=6-i && j<=4+i)
            { 
                if(flag)
                {
                printf("%d",k);
                j<5?k++:k--;
                }
                else
                {
                    printf(" ");
                    if(j==5)
                    k--;
                }
                flag=1-flag;
            }    
            else
            printf(" ");

           } 
        printf("\n");
        }
    printf("\n");
    return 0;
}