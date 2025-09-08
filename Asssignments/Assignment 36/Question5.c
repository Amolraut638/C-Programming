//write a function to transform the string into lowercase
#include<stdio.h>
#include<string.h>
void conv_lowercase()
{
    char str[50];
    int i;
    printf("Enter the string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;

    }
    printf(str);
}
int main()
{
    conv_lowercase();
    printf("\n");
    return 0;
}