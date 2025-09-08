//write a function to remove duplicate names stored in the list of names stored in a 2d char array.
#include<stdio.h>
#include<string.h>
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

int remove_duplicate(char s[][20],int n)
{
    int i,j,k=0;
    char temp[n][20];
    sort(s,n);
    strcpy(temp[k],s[0]);
    for(i=0;i<n-1;)
    {
        for(j=i+1;j<n;j++)
            if(strcmp(s[i],s[j])==0)
                continue;
            else
            {
                i=j;
                k++;
                strcpy(temp[k],s[j]);
                break;
            }
        if(j==n)
            break;
    }
    for(i=0;i<=k;i++)
        strcpy(s[i],temp[i]);
    return k+1;
}

int main()
{
    char s[10][20]={
        "Bhopal","Bhopal","Delhi","Delhi","Delhi","Jaipur",
        "Kanpur","Kanpur","Manglore","Manglore"
    };
    int n;
    n=remove_duplicate(s,10);

    display(s,n);
    printf("\n");
    return 0;
}