//write a function to find the first occurance of adjuscant duplicate values in the array.Function has to return value of the element 
#include<stdio.h>
int findfirstAdjuscentduplicate(int A[],int size)
{
   int i;
   for(i=0;i<=size-2;i++)
        if(A[i]==A[i+1])
            return A[i]; 
}