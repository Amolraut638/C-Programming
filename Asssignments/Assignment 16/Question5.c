//write a program to print all armstrong number under 1000
#include<stdio.h>
int main()
{ 
    int x , y ,digitCount=0 , sum , r , i , p ;
    for(x=1;x<=1000;x++)
    {
        for(digitCount=0,y=x;y;y=y/10)     
        digitCount++;

        for(y=x,sum=0;y;y=y/10)
        {
            r=y%10;
            for(p=1,i=1;i<=digitCount;i++)
            {
                p=p*r;
            }
            sum=sum+p;
        }
        if(sum==x)
        printf("%d ",x);

    }
    return 0;
}
