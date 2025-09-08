//write a function to print PASCAL triangle.(TSRN)
#include<stdio.h>
 void printPascal(int);
 int factorial(int);
 int nCr(int n, int r); 


int main()
{
   int lines;
   printf("Enter the lines you want to print : ");
   scanf("%d",&lines);
   printPascal(lines);
   return 0;
}

int factorial(int n)
 {
    int factorial = 1;
    while(n)
    {
    factorial = factorial * n;
    n--;
    }
    return factorial;
    
}
 
int nCr(int n, int r) {
    return factorial(n) / factorial(n - r)/factorial(r);
}
 

void printPascal(int lines)
{
    int i , j ,flag,n ,r;
    for(i=1;i<=lines;i++)
       {
        n=i-1;
        r=0;
        for(j=1,flag=1;j<=2*lines-1;j++)
           {
                if(j>=lines+1-i && j<=lines-1+i)
                   { 
                    if(flag)
                    printf("%d",nCr(n,r++));
                    else 
                    printf(" ");
                    flag=1-flag;
                   } 
                else
                   printf(" ");
           }
           printf("\n");
        }
        printf("\n");
}
