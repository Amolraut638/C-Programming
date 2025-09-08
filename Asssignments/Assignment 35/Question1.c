//write a program to convert given string into lowercase
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the uppercase string:");
    gets(str);
    
    for(int i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
          
    }
    printf("the lowercase string is %s",str);
    return 0;
}