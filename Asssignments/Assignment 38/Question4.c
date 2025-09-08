//write a function to reverse a string word wise.(for example-if given string is 'Amol Raut' then reversed string is 'Raut Amol')
#include<stdio.h>
#include<string.h>
char* trim(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]!=' ')
            break;
    }
    if(str[i]!='\0')
        strcpy(str,str+i);
    for(i=0;str[i];i++);  //for checking at what position the null character is present
    i--;
    while(str[i]==' ')
        i--;
    str[i+1]='\0';
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

char* reversestringwordwise(char str[])
{
    int i,j=-1,no_of_words,k;
    char s[10][20];
    no_of_words=countWords(str);
    //printf("%d",no_of_words);
    for(i=0;i<no_of_words;i++)
    {
        for(j++,k=0;str[j]!=' '&& str[j]!='\0';j++,k++)
            s[i][k]=str[j];
        s[i][k]='\0';
    }
    strcpy(str,s[no_of_words-1]);
    strcat(str," ");
    for(i=no_of_words-2;i>0;i--)
    {
        strcat(str,s[i]);
        strcat(str," ");
    }
    strcat(str,s[0]);
    strcat(str,"\0");
    return str;
}
int main()
{
    char str[20];
    printf("Enter the string:");
    gets(str);
    printf("%s",reversestringwordwise(str));
    return 0;
}
