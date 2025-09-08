//write a function to swap two elements of a given array with specified indices.
#include<stdio.h>
void swap(int A[],int i,int j)
{
    int t;
    t=A[i];
    A[i]=A[j];
    A[j]=t;
}
int main()
{
    int a,b;
    int A[] = {5, 3, 8, 1, 2, 7}; // Example array
    int size = sizeof(A) / sizeof(A[0]);
    // Print original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Enter the indices for swapping:");
    scanf("%d%d",&a,&b);
    // swapped array
    swap(A,a,b);

    // Print sorted array
    printf("swapped array array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}