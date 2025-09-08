//write a function to check whether a pair of strings are anagram or not.both the strings are stored in 2d char array.
#include<stdio.h>
#include<string.h>
int isAnagram(char s1[],char s2[])
{
    int f1[256]={0},f2[256]={0};
    int i;
    for(i=0;s1[i];i++)
        f1[s1[i]]++;
    for(i=0;s2[i];i++)
        f2[s2[i]]++;
    for(i=0;i<256;i++)
        if(f1[i]!=f2[i])
            return 0;
    return 1;
}
int main()
{
    char s1[]="takes",s2[]="steak";
    if(isAnagram(s1,s2))
       printf("Anagram");
    else
       printf("Not a anagram");
    return 0;
} 