/*
write a menu driven program for following options
1.calculate LCM of two numbers
2.calculate sum of digits of a number
3.volume of cuboid
4.check whether a given number is prime or not
5.exit
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int x;
    while(1)
    {
        printf("\n1.calculate LCM of two numbers");
        printf("\n2.calculate sum of digits of a number");
        printf("\n3.volume of cuboid");
        printf("\n4.check whether a given number is prime or not");
        printf("\n5.Exit\n");
        
        printf("\nEnter your choice:");
        scanf("%d",&x);
        printf("\n");
        
        switch(x)
        {
            case 1:
            {
                int n1, n2, max;

                printf("Enter two positive integers: ");
                scanf("%d %d", &n1, &n2);

                // maximum number between n1 and n2 is stored in max
                for(max=(n1>n2)?n1:n2;max<n1*n2;max++)
                if(max%n1==0 && max%n2==0)
                break;
                printf("The LCM of %d and %d is %d\n",n1,n2,max);
                break;
            }
            

            case 2:
            {
                int a,b,sum=0;
                printf("Enter the number:");
                scanf("%d",&a);
                while(a>0)
                {
                b=a%10;     // ip=123 op=3
                sum=sum+b;
                a=a/10;     //ip=123  op=12
                }
                printf("The sum of the digits of given number is %d\n",sum);
                break;

            }
            
            case 3:
            {
                float width, length, height, volume;
    
                printf("Enter value of width, length & height of the cuboids:\n");
                scanf("%f%f%f", &width, &length, &height);

                volume = width * length * height;;
                printf("Volume of cuboids is : %0.2f\n", volume);
                break;

            }
            
            case 4:
            {
                int n , i;
                printf("Enter the number:");
                scanf("%d",&n);

                if(n<1)
                printf("Invalid number ! pls enter valid number");

                for(i=2;i<n;i++)
                if(n%i==0)
                {
                    printf("Not a prime number\n");
                    break;
                }
                if(i==n)
                printf("Prime number\n");
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
