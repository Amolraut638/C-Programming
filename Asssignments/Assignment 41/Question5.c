//a 2d array is full with 10 email id's,write a function to find how many of them belongs to gmail.com
#include<stdio.h>
#include<string.h>
int countGmail(char s[][50],int n)
{
    char text[]="@gmail.com";
    int i,count=0,j,k;
    for(i=0;i<n;i++)
    {
        if(strlen(s[i])>10)
        {
            for(k=0,j=strlen(s[i])-10;s[i][j];j++,k++)
                if(text[k]!=s[i][j])
                    break;
            if(!text[k])
                count++;
        }
    }
    return count;
}
int main()
{
    char emailids[][50]={
        "kelly@hotmail.com",
        "iamsupercool@gmail.com",
        "roopesh.bhatnagar@gmail.com",
        "smitapurohit@yahoo.com",
        "ajayahuja@gmail.com",
        "wangchuk@gmail.com",
        "rashmi@yahoo.co.in"
    };
    printf("%d ",countGmail(emailids,7));
    printf("\n");
    return 0;
}