//write a function to count total number of duplicate elements in an array.(elements that occur two times in array)
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
int countDuplicates(int A[],int size)
{
    int i,j,dup=0;
    sort(A,size);
    for(i=0;i<size-1;)
    {
        if(A[i]==A[i+1])
        {
            dup++;
            for(j=i;i<size && A[j]==A[i];i++);
        } 
        else
            i++;
           
    }
    return dup;
}
int main()
{
    int a[]={2,2,2,3,3,4,5,5,6,6,6,6,7,8,8};
    printf("The number of duplicate elements are 900%d",countDuplicates(a,15));
    printf("\n");
    return 0;
}