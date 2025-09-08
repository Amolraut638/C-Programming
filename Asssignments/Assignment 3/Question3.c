//write a program to take 3 character as input from user and print characters with their ascii values 
#include<stdio.h>
int main()
{
    char u , v , w ;
    printf("Enter the three characters with space after entering one character:");
    scanf("%c %c %c",&u,&v,&w);

    //printf("Enter the second character :");
    //scanf("%c",&v);

    //printf("Enter the third character :");
    //scanf("%c",&w);

    printf("The ascii value of the %c character is : %d\n",u,u);
    printf("The ascii value of the %c character is : %d\n",v,v);
    printf("The ascii value of the %c character is : %d\n",w,w);


    return 0;
}

//when we are giving the input of the characters then assume that there is not a concept of delimeters in the input like space or enter key
//when inputing characters compiler will treat delimeters as a character and will store it in the variable
//This concept is given in lecture of solutions of assignment 2 and 3
