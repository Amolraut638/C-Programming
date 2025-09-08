//write a function to convert given string into lowercase.
#include<stdio.h>
#include<string.h>
char* lowercase(char *str)
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    return str;
}