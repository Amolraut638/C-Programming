//write a function to check whether a given string is a palindrome or not
#include<stdio.h>
#include<string.h>
int isPalindrome(char str[])
{
    int i,l;
    for(l=0;str[l];l++);  //this is for counting the length of the string.length is stored in the l
    for(i=0;i<l/2;i++)  //i<l/2 is works same as while (start<=end)
    {
        if(str[i]!=str[l-1-i])
            return 0;

    }
    return 1;
}
int main()
{
    char str[20];
    printf("Enter the string:");
    gets(str);
    if(isPalindrome(str))
        printf("Is palindrome");
    else
        printf("Not a palindrome");
    return 0;
}