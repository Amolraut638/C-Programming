//write a program to ask the user to input a nummber of data he would like to enter then ceate an array dynamically
//to accomodate the data values.Now take the input from user and display the average of the data values.    
#include<stdio.h>
#include<string.h>
#include<stdlib.h>  
void f2()
{
    int *arr,i,n,s=0;
    float avg;
    printf("How many values you want to enter: ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    printf("Enter %d values: ",n);
    for(i=0;i<n;i++)
        scanf("%d",(arr+i));  //arr+i means array ke andar pura data ja chuka hain  
    for(i=0;i<n;i++)
        s=s+arr[i];
    avg=(float)s/n;
    printf("Average is %f",avg);
    free(arr);
}
int main()
{
    f2();
    printf("\n");
    return 0;
}