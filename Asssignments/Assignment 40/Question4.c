//write a function to store each word of a string in a two dimentional char array.
#include<stdio.h>
#include<string.h>
char* trim(char str[])
{
    char temp[50];
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]!=' ')
            break;
    }
    if(str[i]!='\0')
        strcpy(temp,str+i);
    for(i=0;temp[i];i++);
    i--;
    while(temp[i]==' ')
        i--;
    temp[i+1]='\0';
    strcpy(str,temp);
    return str;
}

int countWords(char str[])
{
    int i,count=0;
    trim(str);
    for(i=0;str[i];i++)
        if(str[i]==' ')
            count++;
    return count+1;
}

int splitToStrings(char str[],char s[][20],int n)
{
    int i,j=-1,no_of_words,k;
    
    no_of_words=countWords(str);
    if(no_of_words<=n)
        for(i=0;i<no_of_words;i++)
        {
            for(j++,k=0;str[j]!=' '&&str[j]!='\0';j++,k++)
                s[i][k]=str[j];
            s[i][k]='\0';        
        }

    return no_of_words;
}  

void display(char str[][20],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("\n%s",str[i]);
}

int main()
{
    char s[10][20];
    int n;
    char str[]="MysirG Education services";
    n=splitToStrings(str,s,10);

    display(s,n);
    return 0;
}