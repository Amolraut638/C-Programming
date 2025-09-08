//write a function to print all prime numbers between two given numbers.(TSRN)
#include<stdio.h>
void primenum(int,int);
int main()
{
    int x , y;
    printf("Enter the minimum number:");
    scanf("%d",&x);
    printf("Enter the maximum number:");
    scanf("%d",&y);
    primenum(x,y);
    return 0;
}
void primenum(int a ,int b)
{
    int i,j;
    for(j=a+1;j<=b;j++){
		  for(i=2; i<b; i++){
			   if(j%i==0)
			    break;
	      }
    if(j==i)
		  printf("%d ",j);
	 }
}