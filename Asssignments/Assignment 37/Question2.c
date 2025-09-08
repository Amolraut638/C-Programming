//write a function to find the character in a given string.return index of first occurance of given character.return -1 if not found.
#include<stdio.h>
#include<string.h>
int findIndexOf(char str[],char ch)
{
    int i;
    for(i=0;str[i];i++)
        if(ch==str[i])
            return i;
    return -1;
}
