//write a function to calculate area of circle.(TSRS) 
#include<stdio.h>
float area_cicle(int radius);
int main()
{
    float result;
    int r;
    printf("Enter the radius:");
    scanf("%d",&r);
    result=area_cicle(r);
    printf("The area of circle is %0.2f",result);
    return 0;

}
float area_cicle(int radius)
{
    float pi=3.14 , result ;
    result= pi*radius*radius;
    return result;
}