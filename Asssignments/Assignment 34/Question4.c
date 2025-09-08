//write a program to count spaces in given string
#include<stdio.h>
#include<string.h>
void spaces()
{
    char str[100];
    int i,count=0;
    printf("Enter the string:");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i] ==' ')
           count++;

    }
    printf("%d",count);
}

void f1()
{
    char str[50],ch=' ';
    int i,count;
    printf("Enter the string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(i=0,count=0;str[i];i++)
    {
        if(str[i]==ch)
           count++;

    }
    printf("spaces count = %d",count);
}
int main()
{
    spaces();
    //f1();
    printf("\n");
    return 0;
}