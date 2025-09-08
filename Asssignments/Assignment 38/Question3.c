//write a function to count words in a given string.
#include<stdio.h.>
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
int main()
{
    char str[20];
    printf("Enter the string:");
    gets(str);
    printf("%d",countWords(str));
    return 0;
}
