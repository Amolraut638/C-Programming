/*
write a menu driven program for following options.
1.check whether a given set of three numbers are lengths of an isosceles triangle or not.
2.check whether a given set of three numbers are lengths of sides of right angled triangle or not.
3.check whether a given set of three numbers are equilateral triangle or not.
4.exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
while(1)
    {
        printf("\n1.To check isosceles triangle or not");
        printf("\n2.To check right angled triangle or not");
        printf("\n3.To check equilateral triangle or not");
        printf("\n4.Exit\n");

        printf("\nSelect your option :");
        scanf("%d",&x);

        switch(x)
        {
            case 1:
            {
                int x , y , z;
                printf("\nEnter the three numbers :");
                scanf("%d%d%d",&x,&y,&z);
                if(x+y>z && y+z>x && z+x>y)
                    if(x==y || y==z || x==z)
                    printf("Isosceles triangle\n");
                    else
                    printf("Not an isosceles triangle\n");
                else
                    printf("Invalid sides of triangle\n");

            }
            break;

            case 2:
            {
                int x , y , z;
                printf("\nEnter the three numbers :");
                scanf("%d%d%d",&x,&y,&z);
                if(x+y>z && y+z>x && z+x>y)
                    if(x*x + y*y==z*z || x*x + z*z==y*y || y*y + z*z==x*x)
                    printf("Right angled triangle\n");
                    else
                    printf("Not a right angled triangle\n");
                else
                    printf("Invalid sides of triangle\n");


            }
            break;

            case 3:
            {
                int x , y , z;
                printf("\nEnter the three numbers :");
                scanf("%d%d%d",&x,&y,&z);
                if(x+y>z && y+z>x && z+x>y)
                    if(x==y && y==z && x==z)
                    printf("Equilateral triangle\n");
                    else
                    printf("Not an equilateral triangle\n");    
                else
                    printf("Invalid sides of triangle\n");

            }
            break;
            
            case 4:
            {
                printf("Thank you !"); 
                exit(0);
            }

            default:
                printf("invalid input!\n");

        }
    }

return 0;
}