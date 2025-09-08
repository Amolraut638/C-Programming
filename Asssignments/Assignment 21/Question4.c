//Write a function to print first N natural numbers.(TSRN)
#include<stdio.h>
void nat_num(int n);
int main()
{
    int a;
    printf("Enter the value of a :");
    scanf("%d",&a);
    nat_num(a);
    return 0;
}
void nat_num(int n)
{
    int i=1;
    while(i<=n)
    {
    printf("%d\n",i);
    i++;
   }
}