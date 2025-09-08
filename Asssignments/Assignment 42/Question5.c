//write a function to extract a substring from a given string with specified start index and end index 
//and store the extracted string in another char array. 
#include<stdio.h>
#include<string.h>
void extract_string(char *str, int start_index, int end_index, char *result)
{
    int i,j;
    for(j=0,i=start_index;i<end_index;i++,j++)
        result[j]=str[i];
    result[j]='\0';
    
}