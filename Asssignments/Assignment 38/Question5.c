//write a function to do the case insensitive comparison of two strings.
#include<stdio.h>
#include<string.h>
int isSame(char c1,char c2)
{
    if(c1==c2)
        return 1;
    else if(c1>='a' && c1<='z')
    {
        if(c1-32==c2)
            return 1;
    }
    else if(c1>='A' && c1<='Z')
        if(c1+32==c2)
            return 1;
    return 0;   
}
int compareIgnorecase(char s1[],char s2[])
{
    int i;
    if(strlen(s1)!=strlen(s2))
        return 0;
    else
    {
        for(i=0;s1[i];i++)
        {
            if(!isSame(s1[i],s2[i]))
                return 0;
        }
        return 1;

    }
}
int main()
{
    char str1[20],str2[20];;
    printf("Enter the string1:");
    gets(str1);
    printf("Enter the string2:");
    gets(str2);
    if(compareIgnorecase(str1,str2))
        printf("strings are same");
    else
        printf("Strings are not same");
    return 0;
}
