//write a function to print first N prime numbers.(TSRN)
//not understanded this proogram
#include<stdio.h>
void primenum(int);
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    primenum(x);
    return 0;
}
void primenum(int n)
{
    int count=1,j=2, i;
    for(count=1,j=2;count<=n;j++)
	 {
		  for(i=2; i<j; i++)
		    {
			   if(j%i==0)
			    break;
	
            }
          if(j==i)
		  {
			   printf("%d ",j);
			   count++;
		  }
	 }
}