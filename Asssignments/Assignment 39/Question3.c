//write a function to make first character of each word of the string capital
#include<stdio.h>
#include<string.h>
char * capitalize(char str[])
{
    int i;
    if(str[0]>='a'&&str[0]<='z')
        str[0]=str[0]-32;
    for(i=1;str[i];i++)
    {
        if(str[i-1]==' ')
        {
            if(str[i]>='a' && str[i]<='z')
                str[i]=str[i]-32;
        }
    }
    return str;
}
int main()
{
    char str[]="mysirg education services private limited";
    printf("%s",capitalize(str));
    return 0;
}