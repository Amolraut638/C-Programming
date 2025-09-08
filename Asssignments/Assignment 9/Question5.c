//write a program to check whether the given number is divisible by 7 or divisible by 3
#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;

    // Input integer from the user with validation
    printf("Enter an integer: ");
    while (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer: ");
        while (getchar() != '\n'); // Clear input buffer
    }

    // Now 'number' contains the valid input integer
    //printf("The entered integer is: %d\n", number);


    //if(number%7==0 || number%3==0)
       //printf("Number is divisible by 7 or 3");
    if(number%7==0)
        printf("Number is divisible by 7");
    else if(number%3==0)
        printf("Number is divisible by 3");
    else
        printf("Number is not divisible by 7 nor 3 !");    

    return 0;
}