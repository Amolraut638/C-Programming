//write a function to print all unique elements in an array.
#include<stdio.h>
void swap(int A[],int i,int j)
{
    int t;
    t=A[i];
    A[i]=A[j];
    A[j]=t;
}
void sort(int A[],int size)
{
    int i,round,temp;
    for(round=1;round<size;round++)
    {
        for(i=0;i<=size-1-round;i++)
        {
            if(A[i]>A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
        
            }
        }
    }

}   
void printUnique(int A[],int size)
{
    int i,j;
    sort(A,size);
    for(i=0;i<size;)
    {
        printf("%d ",A[i]);
        if(i==size-1)
           break;   
        if(A[i]==A[i+1])
        {
            for(j=i;i<size && A[j]==A[i];i++);
        } 
        else
            i++;
           
    }
}

int main()
{
    int a[]={2,2,2,3,3,4,5,5,6,6,6,6,7,8,8,9};
    printUnique(a,15);
    printf("\n");
    return 0;
   
}