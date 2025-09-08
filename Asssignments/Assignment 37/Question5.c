//write a function to check whether a given string is an alphanumeric(atleast one alphabet and one digit)string or not.
#include<stdio.h>
#include<string.h>
int isAlphaNumeric(char str[])
{
    int i,isAlpha=0,isDigit=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z' || str[i]>='A'&&str[i]<='Z')
            isAlpha=1;
        else if(str[i]>='0'&&str[i]<='9')
            isDigit=1;
    }
    if(isAlpha&&isDigit)
        return 1;
    return 0;
}