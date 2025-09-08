//write a program to take marks of 5 subjects from user. assume marks are given from 100 and the passing marks is 33
//now display whether the candidate is passed or failed in examination
#include<stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5 ;
    printf("Enter the marks of 5 subjects:");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);

    
    if(sub1>=33 && sub2>=33 && sub3>=33 && sub4>=33 && sub5>=33)
    {
        printf("Candidate is Passsed in examination");    
    }       
    else
    {
        printf("Candidate is Failed in examination");    
    }

    return 0;
}