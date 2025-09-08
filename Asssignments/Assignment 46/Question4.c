//write a function to merge two array elements and store it in dynamically created array.return address of this dynamically created address.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* merge(int A[],int n1,int B[],int n2)
{
    int *arr,i,j,k;
    arr=(int*)malloc((n1+n2)*sizeof(int));
    for(i=0,j=0,k=0;i<n1&&j<n2;k++)
    {
        if(A[i]<B[j])
        {
            arr[k]=A[i];
            i++;
        }
        else
        {
            arr[k]=B[j];
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=A[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=B[j];
        j++;
        k++;
    }
    return arr;
}
int main()
{
    int A[]={3,7,10,18,21};
    int B[]={9,11,15};
    int *C,i;
    C=merge(A,5,B,3);
    for(i=0;i<8;i++)
        printf("%d ",C[i]);
    printf("\n");
    return 0;
}