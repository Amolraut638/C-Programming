//write a program which takes month number as input and print number of days in that month
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the month:");
    scanf("%d",&n);

    if(n==1)
        printf("January has 31 days");
    else if(n==2)
        printf("February has 28 days");
    else if(n==3)
        printf("March has 31 days");
    else if(n==4)
        printf("April has 30 days");
    else if(n==5)
        printf("may has 31 days");
    else if(n==6)
        printf("June has 30 days");
    else if(n==7)
        printf("July has 31 days");
    else if(n==8)
        printf("August has 31 days");
    else if(n==9)
        printf("September has 30 days");
    else if(n==10)
        printf("October has 31 days");
    else if(n==11)
        printf("November has 30 days");
    else if(n==12)
        printf("December has 31 days");
    else
        printf("Please enter valid month");
    
    return 0;
}