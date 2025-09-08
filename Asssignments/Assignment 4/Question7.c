#include <stdio.h>
// Function to swap two numbers using pointers

void swap(int* a, int* b) {

int temp = *a;

*a = *b;

*b = temp;

}

int main() {

// Declare and initialize the two numbers

int num1,num2;
printf("Enter the first number:");
scanf("%d",&num1);
printf("Enter the second number:");
scanf("%d",&num2);

// Print the original numbers

printf("Before swapping num1 is %d and num2 is %d\n", num1, num2);

// Call the swap function to swap the numbers

swap(&num1, &num2);

// Print the swapped numbers

printf("After swapping num1 is %d  and num2 is %d\n", num1, num2);

return 0;

}