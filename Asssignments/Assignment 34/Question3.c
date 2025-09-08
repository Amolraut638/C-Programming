//write a program to count vowels in a given string.
#include<stdio.h>
#include<string.h>
/*void vowels()
{
    char str[20];
    int i,count=0;
    printf("Enter the string:");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' 
        || str[i] == 'i' || str[i] == 'I' || str[i] =='o' || str[i]=='O' 
        || str[i] == 'u' || str[i] == 'U')
           count++;

    }
    printf("%d",count);
}
int main()
{
    vowels();
    printf("\n");
    return 0;
}
 */
void f1()
{
    char str[50],v[]="aeiouAEIOU";
    int i,j,count=0;
    printf("Enter the string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
        for(j=0;v[j];j++)
            if(str[i]==v[j])
                count++;

    
    printf("Vowels=%d",count);
}
int main()
{
    f1();
    printf("\n");
    return 0;
}