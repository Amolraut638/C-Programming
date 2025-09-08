//calculating simple interest 
//simple interest=principle*interest rate*time period
#include<stdio.h>
int main()
{  
    int principle ;
    float SI , rate , time ;
    printf("Enter the principle amount in rupees :");
    scanf("%d",&principle);
    printf("Enter the interest rate in percentage:");
    scanf("%f",&rate);
    printf("Enter the total time period in years for which you want to calculate the interest :");
    scanf("%f",&time);
    SI = principle*rate*time/100; //priority of the * and / are same therefore there is no bracket
    printf("The total interest on your principle amount is : %f\n",SI);
    printf("The total amount with interest after %f years is :%f",time,principle+SI);
    return 0;
                                              
}