//write a program to check whether the given alphabet is in uppercase or lowercase
#include<stdio.h>
#include <ctype.h>  // 'isupper','islower' is a function declared in the <ctype.h> header file
                    // used for checking whether a character is an uppercase or lowercase 

int main()
{
    char ch;
    printf("Enter any character :");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    printf("Character is in uppercase");
    else if(ch>='a' && ch<='z') 
    printf("Character is lowercase");
    else
    printf("Invalid character");
    return 0;
}