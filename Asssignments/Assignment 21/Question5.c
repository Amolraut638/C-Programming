//Write a function to print first N odd natural numbers.(TSRN)
#include<stdio.h>
void oddnat_num(int n);
int main()
{
    int a;
    printf("Enter the value of a :");
    scanf("%d",&a);
    oddnat_num(a);
    return 0;
}
void oddnat_num(int n)
{
    int i=1;
    while(i<=n)
    {
    printf("%d\n",2*i-1);
    i++;
   }
}