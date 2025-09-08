//write a function to find the word in a given string.
#include<stdio.h>
#include<string.h>
int findWord(char str[],char word[])
{
    int i,j,wordLength;
    wordLength=strlen(word);
    for(i=0;i<=strlen(str)-wordLength;i++)
    {
        for(j=0;j<wordLength;j++)
        {
            if(str[i+j]!=word[j])
                break;
        }
        if(j==wordLength)
            return i;
    }
    return -1;
}
int main()
{
    char str[]="MysirG Education services private limited";
    printf("%d",findWord(str,"services"));
    printf("\n");
    return 0;
}