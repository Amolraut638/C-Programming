//write a program to calculate the product of two matrices of order 3*3.
#include<stdio.h>
void multmatrix()
{
    int A[3][3],B[3][3],C[3][3],i,j,k,sum;
    printf("Enter 9 numbers of first matrix:");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&A[i][j]);
    
    printf("Enter 9 numbers of second matrix:");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&B[i][j]);
    
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        {
            for(k=0,sum=0;k<=2;k++)
                sum=sum+A[i][k]*B[k][j];
            C[i][j]=sum;
        }
           
    printf("multiplication of matrices is :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",C[i][j]);
            printf("\n");    //this is for line change 
    }
}

int main()
{
    multmatrix();
    printf("\n");
    return 0;
}