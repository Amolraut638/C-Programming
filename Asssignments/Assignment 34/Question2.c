//write a program to count the occurance of a character in a given string.
#include<stdio.h>
#include<string.h>
void f1()
{
    char str[50],ch;
    int i,count;
    printf("Enter the string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    printf("Enter the character:");
    scanf("%c",&ch);

    for(i=0,count=0;str[i];i++)
    {
        if(str[i]==ch)
           count++;

    }
    printf("The occurance of the character \'%c\' in given string %s is %d times",ch,str,count);
}
int main()
{
    f1();
    printf("\n");
    return 0;
}