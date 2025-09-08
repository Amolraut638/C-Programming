//write a program to calculate Average of three numbers
#include<stdio.h>

int main()
{
    int a, b, c;
    float avg;
    printf("Enter The First Number:");
    scanf("%d",&a);
    printf("Enter The Second Number :");
    scanf("%d",&b);
    printf("Enter The Third Number :");
    scanf("%d",&c);
    avg=(a+b+c)/3.0;  //It is mandatory to write the point zero after three to get the answer in points means in float
    printf("The Average Of Three Numbers is %f :",avg);
    return 0;
}