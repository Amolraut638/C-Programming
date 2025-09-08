/*
write a menu driven program for following
1.factorial of a number
2.check even and odd
3.area of circle
4.sum of first N natural numbers
5.exit
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int x;
    
    while(1)
    {
        printf("\n1.factorial of a number");
        printf("\n2.check even and odd");
        printf("\n3.area of circle");
        printf("\n4.sum of first N natural numbers");
        printf("\n5.Exit\n");
        
        printf("\nEnter your choice:");
        scanf("%d",&x);
        printf("\n");
        
        switch(x)
        {
            case 1:
            {
                int num, fact=1 , i;
                printf("Enter the number:");
                while(scanf("%d",&num) != 1)
                {
                printf("invalid ! enter the valid number :");
                while(getchar() != '\n');
                }
                for(i=1;i<=num;i++)
                {
                fact=fact*i;
                }
                printf("\nThe factorial of %d is %d\n",num,fact);
                break;
            }
           

            case 2:
            {
                int n;
                printf("Enter the number :");
                scanf("%d",&n);

                if(n%2==0)
                    printf("%d is a Even number !\n",n);
                else 
                    printf("%d is a Odd number !\n",n );
                break;
            }
           

            case 3:
            {
                int radius ;
                float pi=3.14;
                printf("Enter the radius of circle:");
                scanf("%d",&radius);

                printf("The area of circle is %0.2f \n",pi*radius*radius);
                break;
            }
            

            case 4:
            {
                int n,sum;
                printf("Enter the value of n:");
                scanf("%d",&n);

                sum=(n*(n+1)/2);
                printf("The sum of first %d natural numbers is %d\n",n,sum);
                break;
            }
            

            case 5:
            {
                exit(0);
            }
            

            default:
                printf("Invalid choice ! pls choose from below options\n");
    
        }
    }
    return 0;
}
