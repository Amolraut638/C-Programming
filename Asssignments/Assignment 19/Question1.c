//write a program which takes month number as input and display the number of days in that month
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the month number:");
    scanf("%d",&x);

    switch(x)
    {
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days");
            break;
        }
       
        {
            case 4: case 6: case 9: case 11:
            printf("30 days");
            break;
        }
       
        {
            case 2:
            printf("28 or 29 days");
            break;
        }

        {
            default:
            printf("\nInvalid month ! Enter a valid month between 1 to 12");
        }
    }
    return 0;
} 