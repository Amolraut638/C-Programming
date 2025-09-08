/*
write a menu driven program with following options
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Exit
*/
#include <stdio.h>
#include <stdlib.h> //for the use of exit function this library is required

int main()
{

  int x;
  while (1)
  {
    printf("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Exit\n");
    printf("\nEnter your choice:");
    scanf("%d", &x);
    printf("\n");

    switch (x)
    {
    case 1:
    {
      int num_inputs, num, result = 0;
      printf("How many numbers you have to add ? :");
      scanf("%d", &num_inputs);
      for (int i = 1; i <= num_inputs; i++)
      {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        result = result + num;
      }
      printf("\n");
      printf("The sum is %d\n", result);
    }
    break;

    case 2:
    {
      int a, b, c;
      printf("Enter two numbers to subtract:");
      scanf("%d %d", &a, &b);
      printf("\n");
      printf("%d - %d = %d\n", a, b, c = a - b);
    }
    break;

    case 3:
    {
      int num_inputs, num, result = 1;
      printf("How many numbers you have to multiply ? :");
      scanf("%d", &num_inputs);
      for (int i = 1; i <= num_inputs; i++)
      {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        result = result * num;
      }
      printf("\n");
      printf("The multiplication is %d\n", result);
    }
    break;

    case 4:
    {
      int a, b, c;
      printf("Enter the two numbers to divide:");
      scanf("%d %d", &a, &b);
      printf("\n");
      printf("%d / %d = %d\n", a, b, c = a / b);
    }
    break;

    case 5:
      printf("Thank you !");
      exit(0); // exit-program end      return-function end

    default:
      printf("Invalid choice !\n");
    }
  }
  return 0;
}

// goto is not good