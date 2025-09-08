//write a program to sort 10 city names stored in two dimentional array, taken from user.
#include<stdio.h>
#include<string.h>
void inputStrings(char str[][20],int n)
{
    int i,l;
    for(i=0;i<n;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
}

void sort(char str[][20],int n)
{
    int r,i;
    char temp[20];
    for(r=1;r<=n-1;r++)
    {
        for(i=0;i<=n-1-r;i++)
        {
            if(strcmp(str[i],str[i+1])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],temp);
            }
        }
    }
}

void display(char str[][20],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("\n%s",str[i]);
}

int main()
{
    int n=10;
    char str[n][20];

    printf("Enter %d strings (each up to 19 characters):\n", n);
    inputStrings(str, n);
    sort(str,n);
    display(str,n);

    return 0;
}