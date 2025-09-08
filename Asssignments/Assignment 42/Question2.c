//write a function to search all occurrances of a given character in a given string.Result of search is a list of indices to be stored in given array.
#include<stdio.h>
#include<string.h>
void search_all_occurrences(char *str, char ch, int *arr)
{
    int i,j;
    for(i=0,j=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            arr[j]=i;
            j++;
        }
    }
}