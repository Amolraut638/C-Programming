//write a program which takes the lenghts of sides of triangle as input.display whether the triangle is valid or not
#include<stdio.h>
int main()
{
    int side1 , side2 , side3 ;
    printf("Enter the lenghth of sides of the triangle :");
    scanf("%d%d%d",&side1,&side2,&side3);

    if(side1 + side2 > side3   &&   side1 + side3 > side2   &&   side3 + side2 > side1)
    printf("The triangle having sides %d %d,%d is a valid traingle",side1,side2,side3);
    else
    printf("The triangle having sides %d,%d,%d is not a valid triangle",side1,side2,side3);

    return 0;
}

/*to check whether a given set of three side lengths forms a valid triangle, you can use the triangle inequality theorem.
 According to this theorem, the sum of the lengths of any two sides of a triangle must be greater than the length of the
  remaining side.*/