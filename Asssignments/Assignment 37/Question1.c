//write a function to count vowels in a given string.
#include<stdio.h>
#include<string.h>
int countVowels(char str[])
{
    char v[]="aeiouAEIOU";
    int count,i,j;
    for(i=0;str[i];i++)
    {
        for(j=0;v[j];j++)
            if(str[i]==v[j])
            {
                count++;
                break;
            }
            
    }
    return count;
}