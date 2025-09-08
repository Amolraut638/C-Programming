//Write a function to merge two arrays of the same size sorted in descending order.

#include<stdio.h>

void merge(int A[],int B[],int size,int C[])
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size && j<size;k++)
    {
        if(A[i]>B[j])
        {
            C[k]=A[i];
            i++;
        }
        else
        {
            C[k]=B[j];
            j++;
        }
    }
    while(i<size)
    {
        C[k]=A[i];
        i++;
        k++;    
    }
    while(j<size)
    {   
        C[k]=B[j];
        j++;
        k++;
    }
}
int main()
{
    int a[]={20,13,10,7,5};
    int b[]={33,29,25,20,17};
    int c[10];
    merge(a,b,5,c);
    printf("\n");
    return 0;
}