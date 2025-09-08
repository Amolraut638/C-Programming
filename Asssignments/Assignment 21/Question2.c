//write a function to calculate simple interest.(TSRS)
#include<stdio.h>
float simple_interest(int,float,float);
int main()
{
    int principle;
    float si,rate,time;
    printf("Enter the principle amount,interest rate and the time period:\n");
    scanf("%d%f%f",&principle,&rate,&time);
    si=simple_interest(principle,rate,time);
    printf("The simple interest on amount %d at interest %0.2f in the time duration %0.1f is %0.2f:",principle,rate,time,si);
    return 0;
}
float simple_interest(int principle,float rate,float time)
{
    float SI;
    
    SI = principle*rate*time/100; //priority of the * and / are same therefore there is no bracket
    
    return SI;

}











