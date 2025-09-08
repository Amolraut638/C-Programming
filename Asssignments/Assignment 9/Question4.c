//write a program to check whether given number is divisible by 3 and divisible by 2.
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int number;

    // Input integer from the user with validation
    printf("Enter an integer: ");
    while (scanf("%d", &number) != 1)
    {
        printf("Invalid input !!! Please enter an integer: ");
        while (getchar() != '\n'); // Clear input buffer
    }

    if(number%2==0 && number%3==0)
       printf("Number is divisible by both 2 and 3");
    else if(number%2==0)
        printf("Number is divisible by 2");
    else if(number%3==0)
        printf("Number is divisible by 3");
    else
        printf("Number is not divisible by 2 nor 3 !");    

    return 0;
}




/*We use a while loop to repeatedly prompt the user to enter an integer until they provide valid input.
Within the loop, scanf attempts to read an integer value. If scanf returns a value other than 1 (indicating that it failed to read an integer), it means the input was invalid.
We clear the input buffer using a nested while loop that reads and discards characters from the input buffer until a newline character (\n) is encountered. This ensures that any invalid input characters are flushed from the input buffer.
Once valid input is provided, the program continues execution with the entered integer value stored in the variable number.
Now, regardless of whether the user enters a character like 'A' or an integer, the program will only accept valid integer input.*/