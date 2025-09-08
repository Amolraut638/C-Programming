//write a programt to find the number of vowels in each of the five strings stored in two dimentional array,taken from user.
#include<stdio.h>
#include<string.h>
void inputStrings(char str[][20],int n)
{
    int i,l;
    for(i=0;i<n;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
}
void countVowels(char str[][20],int n)
{
    char v[]="aeiouAEIOU";
    int i,j,k,count;
    inputStrings(str,n);
    for(i=0;i<n;i++)
    {
        for(j=0,count=0;str[i][j];j++)
            for(k=0;v[k];k++)
                if(str[i][j]==v[k])
                    count++;
        printf("Vowels in %s are %d\n",str[i],count);
    }
}
int main()
{
    int n=5;
    char str[n][20];

    printf("Enter %d strings (each up to 19 characters):\n", n);
    countVowels(str, n);

    return 0;
}