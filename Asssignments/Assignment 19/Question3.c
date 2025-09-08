//write a program which take day number as input and display the unique greeting message for that day
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the day number(mon==1) :");
    scanf("%d",&n);

    switch(n)
       {
        case 1:
            printf("Happy monday");
            break;
        case 2:
            printf("Happy tuesday");
            break;
        case 3:
            printf("Happy wednesday");
            break;
        case 4:
            printf("Happy thursday");
            break;
        case 5:
            printf("Happy friday");
            break;
        case 6:
            printf("Happy saturday");
            break;
        case 7:
            printf("Happy sunday");
            break;
        
        default:
            printf("Invalid day !");
        }
    
    return 0;
}