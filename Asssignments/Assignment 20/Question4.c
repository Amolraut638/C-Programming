/*
write a program to check whether a given character is vowel or consonent or some 
other special character using switch case statement.
*/
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(ch)
     {
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("The entered character is a uppercase vowel\n");
            break;
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("The entered character is a lowercase vowel\n");
            break;

        case 'B': case 'C': case 'D': case 'F': case 'G': case 'H': case 'J': case 'K': case 'L': case 'M':
        case 'N': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'V': case 'W': case 'X': case 'Y': 
        case 'Z':
            printf("The entered character is uppercase consonent\n");
            break;
        case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k': case 'l': case 'm': 
        case 'n': case 'p': case 'q': case 'r': case 's': case 't': case 'v': case 'w': case 'x': case 'y': 
        case 'z':
            printf("The entered character is lowercase consonent\n");
            break;

        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
            printf("It is a digit\n");
            break;

        default:
            printf("It is a special character\n");
            break;
    }

    return 0;
}