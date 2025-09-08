//write a function to trim a string(removing leading spaces from both the ends).
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
int main()
{
    char str[20];
    printf("Enter the string:");
    gets(str);
    //char str[]="   MysirG Education  ";
    printf("%s",trim(str));
    printf("\n%d",strlen(str));
    return 0;
}