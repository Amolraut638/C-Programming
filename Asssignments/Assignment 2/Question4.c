// write a program to calculate Volume of Cuboid = Length x Width x Height  (Cubic Unit)
#include<stdio.h>
int main()
{  
    float length , width , height ;
    printf("Enter the lenght of cuboid :");
    scanf("%f",&length);
    printf("Enter the width of cuboid :");
    scanf("%f",&width);
    printf("Enter the height of the cuboid :");
    scanf("%f",&height);

    float vol = length * width * height;
    printf("The Volume of cuboid is : %f",vol);
    return 0;
                                              
}