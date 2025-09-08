/* Write a function to rotate an array by n position in d direction.the d is an indicative value for left of right  */
#include<stdio.h>

void rotate(int A[],int size,int n,int d)
{
    //d==+1 then right direction
    //d==-1 then left direction
    int temp,i,shiftcount;
    if(d==1)
    {
        for(shiftcount=1;shiftcount<=n;shiftcount++)
        {
            //firstly we have to remove last element from array
            temp=A[size-1];
            for(i=size-1;i>0;i--)
            {
                A[i]=A[i-1];
            }
            A[i]=temp;
        }

    }
    else if(d==-1)
    {
        
        for(shiftcount=1;shiftcount<=n;shiftcount++)
        {
            //firstly we have to remove last element from array
            temp=A[0];
            for(i=0;i<size-1;i++)
            {
                A[i]=A[i+1];
            }
            A[i]=temp;
        }


    }
}
int main()
{
    int p,d;
    int A[] = {5, 3, 8, 1, 2}; // Example array
    int size = sizeof(A) / sizeof(A[0]); // Calculate size of array

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Enter the position and direction of the array to shift: ");
    scanf("%d%d",&p,&d);
    rotate(A,size,p,d);


    printf("The shifted array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}