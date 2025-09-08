//write a program to find words ending with letter 's' and store each such word in 2d char array.
#include<stdio.h>
#include<string.h>
char* trim(char str[])
{
    char temp[200];
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
void f1()
{
    char str[]="mysirg education services and this is a learning platform for students";
    char s[20][20],temp[100][20];
    int i,j,no_of_words;
    no_of_words=splitToStrings(str,temp,strlen(str));
    for(i=0,j=0;i<no_of_words;i++)
    {
        if(temp[i][strlen(temp[i])-1]=='s')
        {
            strcpy(s[j],temp[i]);
            j++;
        }
    }
    for(i=0;i<j;i++)
        printf("\n%s",s[i]);
}
int main()
{
    f1();
    printf("\n");
    return 0;
}
