//write a function to return the most repeating character in a list of strings. 
#include<stdio.h>
#include<string.h>
char maxFreqCharacter(char s[][20],int n)
{
    int freq[256]={0};
    int i,j,max;
    char ch;
    for(i=0;i<n;i++)
    {
        for(j=0;s[i][j];j++)
            freq[s[i][j]]++;
    }
    max=freq[0];
    ch=0;
    for(i=1;i<256;i++)
        if(max<freq[i])
        {
            max=freq[i];
            ch=i;
        }
    return ch;
}
int main()
{
    char s[][20]={"bhopal","jaipur","patna","delhi"};
    printf("%c",maxFreqCharacter(s,4));
    printf("\n");
    return 0;
}