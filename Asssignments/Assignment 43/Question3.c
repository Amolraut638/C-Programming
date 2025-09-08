//write a function to merge two arrays in a given array
#include<stdio.h>
#include<string.h>
void merge(int *arr1, int size1, int *arr2, int size2, int *arr3)
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size1 && j<size2;k++)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
           arr3[k]=arr2[j];
           j++; 
        }
    }
    while(i<size1)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
} 
int main()
{
    int arr3[11];
    int size1=5,size2=6;
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,10,12};
    merge(arr1,5,arr2,6,arr3);
    printf("merged array:\n");
    for(int i=0;i<11;i++)
    {
        printf("%d ",arr3[i]);
    }

    return 0;
}