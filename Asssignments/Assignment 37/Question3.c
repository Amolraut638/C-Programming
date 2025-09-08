//write a function to find a character in a given string between spaecified indices. 
#include<stdio.h>
#include<string.h>
int findIndexOfInRange(char str[],char ch,int startIndex,int endIndex)
{
    int i;
    for(i=startIndex;str[i]&&i<endIndex;i++)
        if(ch==str[i])
            return i;
    return -1;
}