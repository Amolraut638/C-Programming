// print Area of circle
#include<stdio.h>

int main() 
{
   float pie = 3.14 ;
   int radius;
   printf("Enter The Radius of Cicle:");
   scanf("%d",&radius);
   printf("The radius of the circle is %d\n" , radius);
   float area = (float)(pie* radius * radius);
   printf("The area of the given circle is %0.2f", area);
   return 0;
}

//3.14 double    //3.14f here f means 3.14 is considered as float
//0.14 float