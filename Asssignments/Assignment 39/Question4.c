//write a function to make acronym name from a given name.for example Amol Vishnu Raut becomes A V Raut.
#include<stdio.h>
#include<string.h>
int countWords(char str[])
{
    int i,count=0;
    //trim(str);
    for(i=0;str[i];i++)
        if(str[i]==' ')
            count++;
    return count+1;
}
char* nameAccronym(char str[])
{
    char temp[50];
    int i,n,j=1,k=0;
    if(str[0]>='a'&&str[0]<='z')
        temp[0]=str[0]-32;
    else
        temp[0]=str[0];
    n=countWords(str);
    for(i=1;str[i];i++)
    {
        if(str[i-1]==' ')
        {
            j++;
            if(j==n)
            {
                k++;
                temp[k]=' ';
                k++;
                if(str[i]>='a'&&str[i]<='z')
                    temp[k]=str[i]-32;
                else
                    temp[k]=str[i];
                for(k++,i++;str[i];i++,k++)
                    temp[k]=str[i];
                temp[k]='\0';
            }
            else
            {
                k++;
                temp[k]=' ';
                k++;
                if(str[i]>='a'&&str[i]<='z')
                    temp[k]=str[i]-32;
                else
                    temp[k]=str[i];
            }
            
        }
    }
    strcpy(str,temp);
    return str;
} 
int main()
{
    char str[]="Amol Vishnu Raut";
    printf("%s",nameAccronym(str));
    printf("\n");
    return 0;
}  