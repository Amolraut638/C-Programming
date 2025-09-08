//write a program to calculate the sum of n numbers entered by the user using malloc and free.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void f3()
{
    int *arr,i,n,s=0;
    
    printf("How many values you want to enter: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("Enter %d values: ",n);
    for(i=0;i<n;i++)
        scanf("%d",(arr+i));
    for(i=0;i<n;i++)
        s=s+arr[i];
    
    printf("Sum is %d",s);
    free(arr);
}
int main()
{
    f3();
    printf("\n");
    return 0;
}