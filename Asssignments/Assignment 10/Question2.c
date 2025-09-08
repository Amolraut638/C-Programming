//write a program to check whether the given character is an uppercase alphabet
// or lowercase alphabet or a digit or a special character 
#include<stdio.h>
#include <ctype.h>  // 'isupper','islower' is a function declared in the <ctype.h> header file
                    // used for checking whether a character is an uppercase or lowercase 

int main()

{
    char x;

    printf("Enter any character :");
    scanf("%c",&x);

    if(isupper(x))
    printf("%c is in uppercase alphabet",x);

    else if(islower(x)) 
    printf("%c is lowercase alphabet",x);

    else if(isdigit(x))
    printf("%c is a digit ",x);

    else
    printf("%c is a special character",x);

    return 0;

}