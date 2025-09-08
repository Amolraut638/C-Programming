//write a function to swap strings of two char arrays.
#include<stdio.h>
#include<string.h>
void swapStrings(char s1[],char s2[])
{
    char temp[100];
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
    
    printf("s1= %s\n",s1);
    printf("s2= %s",s2);
}
int main()
{
    char s1[]="Amol";
    char s2[]="Raut";
    swapStrings(s1,s2);
    return 0;
}
