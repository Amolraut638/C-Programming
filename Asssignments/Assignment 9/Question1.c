//write a program which take cost price and selling price of a product from user.calculate profit or loss in percentage
#include<stdio.h>
int main()
{
    float cost_price , selling_price , profit , loss;
    printf("Enter the cost price and selling price :");
    scanf("%d%d",&cost_price,&selling_price);

    if(selling_price > cost_price)
    printf("The total profit in percentage is : %f %%",(selling_price - cost_price)/cost_price*100);

    else if(selling_price < cost_price)
    printf("The total loss in percentage is : %f %%",(cost_price - selling_price)/cost_price*100);

    else
    printf("There is no profit or loss");

    return 0;
}