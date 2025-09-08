//write a program to convert given string into uppercase
#include<stdio.h>
#include<string.h>
void conv_uppercase()
{
    char str[50];
    int i;
    printf("Enter the string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;

    }
    printf(str);
}
int main()
{
    conv_uppercase();
    printf("\n");
    return 0;
}