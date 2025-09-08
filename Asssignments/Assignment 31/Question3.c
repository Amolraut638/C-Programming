//write a function to sort an array of any size.(TSRN)
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
int main()
{
    int A[] = {5, 3, 8, 1, 2}; // Example array
    int size = sizeof(A) / sizeof(A[0]); // Calculate size of array

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Sort the array
    sort(A, size);

    // Print sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}