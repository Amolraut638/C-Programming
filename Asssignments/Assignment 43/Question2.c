//write a function to sort an array of int type values.
#include<stdio.h>
#include<string.h>
void sort(int *ptr,int size)
{
    int r,i,t;
    for(r=1;r<size;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(ptr[i]>ptr[i+1])
            {
                t=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=t;
            }
        }
    }
}