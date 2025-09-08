//write a function to print all armstrong numbers between two given numbers(TSRN)
#include<stdio.h>
int isArmstrong(int x);
void printArmstrong(int a,int b);

int main()
{
  int p,q;
  printf("Enter the minimum number:");
  scanf("%d",&p);
  printf("Enter the maxmum number:");
  scanf("%d",&q);
  printArmstrong(p,q);
  return 0;
} 

void printArmstrong(int a,int b)
{
  int n;
  for(n=a+1;n<b;n++){
    isArmstrong(n);
  } 
}

int isArmstrong(int x)
{
    int y ,digitCount=0 , sum , remainder , i , p ;
    y=x;

    while(y){
        digitCount++;
        y=y/10;
    }

    for(y=x,sum=0;y;y=y/10){
        remainder=y%10;
        for(p=1,i=1;i<=digitCount;i++){
            p=p*remainder;
        }
        sum=sum+p;
    }
    if(sum==x)
      printf("%d ",x);
    else
      return 0;
}



