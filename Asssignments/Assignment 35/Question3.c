//write a program to count the total number of alphabets,digits and special character present in a string
#include<stdio.h>
int main()
{
    int i , alphabets=0 , digits=0 , spcharacters=0 ;
    char str[100];
    printf("Enter the string:");
    gets(str);

    for(i=0;str[i];i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            spcharacters++;
        }


    }
    printf("the total number of alphabets is %d\n",alphabets);
    printf("the total number of digits is %d\n",digits);
    printf("number of special character is %d\n",spcharacters);
    return 0;
}