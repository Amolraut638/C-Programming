//write a function to convert given string into uppercaase.
#include<stdio.h>
#include<string.h>
char* uppercase(char *str)
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    return str;
}