//Write a function to count the frequency of each element of an array.
#include<stdio.h>
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
void countFrequency(int A[],int size)
{
    int i,j,count;
    sort(A,size);
    for(i=0;i<size;)
    {
        for(count=0,j=i;i<size && A[j]==A[i];i++)
            count++;
        printf("\n%d-%d",A[j],count);        
        
    }
}
int main()
{
    int a[]={2,2,2,3,3,4,5,5,6,6,6,6,7,8,8};
    int size = sizeof(a) / sizeof(a[0]);
    countFrequency(a,size);
    printf("\n");
    return 0;

}