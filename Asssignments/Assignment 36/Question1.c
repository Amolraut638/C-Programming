//write a function to calculate the lenght of the string
#include<stdio.h>
#include<string.h>

void mystring()
{
    char str[50];
    int i,count;
    printf("Enter the string:");
    gets(str);
    //fgets(str,50,stdin);
    //str[strlen(str)-1]='\0';

    for(i=0,count=0;str[i];i++)
        count++;

    printf("The lenght is %d",count);
}
int main()
{
    mystring();
    printf("\n");
    return 0;
}
