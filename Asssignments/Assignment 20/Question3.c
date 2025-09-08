/*
write a program to check whether a given character is a uppercase alphabet or lowercase
alphabet or some other special character using switch case statement.
*/
#include <stdio.h>

int main()
{
    char i;

    printf("Enter a character: ");
    scanf(" %c", &i);

    switch(i) {
        
        case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G': case 'H': case 'I': case 'J':
        case 'K': case 'L': case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R': case 'S': case 'T':
        case 'U': case 'V': case 'W': case 'X': case 'Y': case 'Z':
            printf("Upper case character\n");
            break;

        case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g': case 'h': case 'i': case 'j':
        case 'k': case 'l': case 'm': case 'n': case 'o': case 'p': case 'q': case 'r': case 's': case 't':
        case 'u': case 'v': case 'w': case 'x': case 'y': case 'z':
            printf("Lower case character\n");
            break;

        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
            printf("Digit\n");
            break;

        default:
            printf("Special character\n");
            break;
    }

    return 0;
}

/*
#include <stdio.h>
int main()
{
char i;
printf("Enter a character: \n");
scanf("%c",&i);
switch(i)
{
case 'A'...'Z':
printf("Upper case character\n");
break;
case 'a'...'z':
printf("Lower case character\n");
break;
case '0'...'9':
printf("Digit \n" );
break;
default:
printf("Special character\n");
}
return 0;
}
*/