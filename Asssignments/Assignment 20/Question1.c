/*write a program which take marks as input and display grades
-marks from 90-100 - A grade
-marks from 80-90 - B grade
-marks from 70-80 - C grade
-marks from 60-70 - D grade
-marks from 50-60 - E grade
-marks below 50 - F grade
-marks <0 and >100 -invalid
*/

#include<stdio.h>
int main()
{
   int marks;
   l1:
   printf("Enter marks from 0-100: ");
   scanf("%d", &marks);

   switch( marks / 10 )
   {

   case 10:
   case 9:
     printf("Grade: A\n");
     goto l1;
     break;

   case 8:
     printf("Grade: B\n");
     goto l1;
     break;

   case 7:
     printf("Grade: C\n");
     goto l1;
     break;

   case 6:
     printf("Grade: D\n");
     goto l1;
     break;

   case 5:
     printf("Grade: E\n");
     goto l1;
     break;

   case 4:
   case 3:
   case 2:
   case 1:
   case 0:
     printf("Grade: F\n");
     goto l1;
     break;
     
     default:
     printf("Invalid marks !\n");
     goto l1;

   }

   return 0;
}