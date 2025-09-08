//write a function to move first value of the array to the position where all smaller values will be in the left and greater values will be in right 
#include<stdio.h>
#include<string.h>
int f4(int A[],int size)
{
    int left,right,loc,temp;
    left=0;
    right=size-1;
    loc=0;

    while(left<right)
    {
        while(left<right&&A[loc]<A[right])
            right--;
        if(left==right)
            break;
        temp=A[right];
        A[right]=A[loc];
        A[loc]=temp;
        loc=right;
        while(left<right&&A[left]<A[loc])
            left++;
        if(left==right)
            break;
        temp=A[left];
        A[left]=A[loc];
        A[loc]=temp;
        loc=left;
    }
    return loc;
}
int main()
{
    int A[]={5,8,3,7,4,6,1,2,9,10};
    int size=10;
    f4(A,10);
    for(int i=0;i<10;i++)
        printf("%d ",A[i]);
    return 0;
}