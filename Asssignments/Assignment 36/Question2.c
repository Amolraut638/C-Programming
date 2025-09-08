//write a function to reverse a string
#include<stdio.h>
#include<string.h>
void mystring()
{
    char str[50];
    int i,count;
    printf("Enter the string:");
    gets(str);

    int len = strlen(str);
 
    for (int i = 0, j = len - 1; i <= j; i++,j--)
    {
        // swapping characters
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
         
    }
    printf("The reversed string is %s",str);
}
int main()
{
    mystring();
    return 0;
}