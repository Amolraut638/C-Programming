//write a program to calculate the length of the string without using builtin method
#include<stdio.h>
#include<string.h>
void fun()
{
    char str[50];
    int i;
    printf("Enter the string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0'; //is used to remove the newline ('\n') character that fgets() stores in the input string.
    for(i=0;str[i];i++);
    printf("The lenght is %d",i);
}
int main()
{
    fun();
    printf("\n");
    return 0;
}