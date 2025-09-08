//write a function to print all prime factors of a given number.for example if 36 is your number then result should be 2,2,3,3.(TSRN)
#include<stdio.h>
void primefactors(int n);
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    primefactors(a);
    return 0;
}
void primefactors(int n)
{
    int i;
    for(i=2;n>1;i++)
    {
        while(n%i==0){
            printf("%d ",i);
            n=n/i;
        }
    }
}