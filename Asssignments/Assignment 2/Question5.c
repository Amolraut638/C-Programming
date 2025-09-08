/*write a program to ask user about cost price and selling price of banana per dozen.
calculate the profit or loss earned upon selling 25 bananas*/
#include<stdio.h>
int main()
{  
    float cost_price , selling_price , profit ,w ,x ,y ;
    printf("Enter the cost price in rupees per dozen : ");          //for example 20
    scanf("%f",&cost_price);
    printf("Enter the selling price in rupees per dozen : ");       //for example 25
    scanf("%f",&selling_price);
    
    x=cost_price/12*25;  // cost price 0f 25 bananas              //41.6666
    
    y=selling_price/12*25;    //selling price of 25 bananas       //52.0833      
     
    if(y>x)
    printf("The total profit by selling 25 bananas is : %f",y-x);   //10.41666
    else if(x>y)
    printf("The total loss by selling 25 bananas is : %f",x-y);
    else
    printf("There is no any loss or profit");
    return 0;
                                              
}