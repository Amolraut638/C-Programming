//write a program to find whether a given number is a armstrong number or not
//armstrong number,for example 1) 246 : 2^3 + 4^3 + 6^3 = 246 otherwise not a armstrong number
//                             2) 24   :2^2 + 4^2 = 24 otherwise not a armstrong number
#include<stdio.h>
int main()
{ 
    int x , y ,digitCount=0 , sum , r , i , p ;
    printf("Enter a number:");
    scanf("%d",&x);
    y=x;
    while(y)       //we can also write for loop as for(y=x;y;y=y/10)   digitCount++;
    {
        digitCount++;
        y=y/10;
    }
/*     for(y=x,sum=0;y;y=y/10)
    {
        r=y%10;
        for(p=1,i=1;i<=digitCount;i++)
        {
            p=p*r;
        }
        sum=sum+p;
    } */
    y=x;
    sum=0; 
    while(y)   
    {
        r=y%10;
        for(p=1,i=1;i<=digitCount;i++) //har bar for loop end hoga to p 1 hona chahiye
        {
            p=p*r;
        }
        sum=sum+p;
        y=y/10;
    }
    if(sum==x)
    printf("%d is an armstrong number",x);
    else
    printf("%d is not an armstrong number",x); 
    return 0;
}

