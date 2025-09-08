//write a function to count frequency of each character of given string.
#include<stdio.h>
#include<string.h>
void sort(char str[])
{
    int r,i,n;
    char ch;
    n=strlen(str);
    for(r=1;r<=n-1;r++)
    {
        for(i=0;i<=n-1-r;i++)
        {
            if(str[i]>str[i+1])
            {
                ch=str[i];
                str[i]=str[i+1];
                str[i+1]=ch;
            }
        }
    }
}
void countFreq(char str[])
{
    int i,count;
    char temp[100];
    strcpy(temp,str);
    sort(temp);
    for(i=0,count=1;temp[i];i++)
    {
        
        if(temp[i]==temp[i+1])
            count++;
        else
        {
            printf("%c %d\n",temp[i],count);
            count=1;
        }
    }

}
int main()
{ 
    char str[20];
    printf("Enter the string:");
    gets(str);
    countFreq(str);
    return 0;
}  
