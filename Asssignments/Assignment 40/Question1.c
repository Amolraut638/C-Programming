//write a function to store strings taken from user to the given 2d char array.
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
int main()
{
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Clear the input buffer
    while(getchar() != '\n');

    char str[n][20];

    printf("Enter %d strings (each up to 19 characters):\n", n);
    inputStrings(str, n);

    printf("\nThe entered strings are:\n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}