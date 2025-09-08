//write a function to swap two characters of a given string with specified indeces
#include<stdio.h>
#include<string.h> 
char* swapCharacters(char str[],int i,int j)
{
    char ch;
    if(i<strlen(str)&&j<strlen(str))
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
    }
    return str;

}