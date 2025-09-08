//convert the following if else statenemt into switch case statement
/*
if(var==1)
  printf("good");
else if(var==2)
  printf("better");
else if(var==3)
  printf("best");
else
  printf("invalid");
*/
#include<stdio.h>
int main()
{
    int var;
    printf("Enter the var value:");
    scanf("%d",&var);

    switch(var)
    {
        case 1:
        {
            printf("good");
            break;
        }
        case 2:
        {
            printf("better");
            break;
        }
        case 3:
        {
            printf("best");
            break;
        }
        default:
        {
            printf("Invalid");
            break;
        }
    }
    return 0;
}    