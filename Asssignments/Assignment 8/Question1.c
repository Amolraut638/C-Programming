//write a program to check whether the given number is a three digit number or not
#include<stdio.h>
int main()
{  
    int x , count=0 ;
    printf("Enter the three digit number :");
    scanf("%d",&x);

    while(x!=0)
    {
     x=x/10;
     count++;                        //if(x>99&&x<1000) then number is 3 digit number

    }
    if(count==3)
    printf("The entered number is three digit number");
    else
    printf("The entered number is not a three digit number");
    //printf("%d",count);
    return 0;
}

/* 1)To begin, the user will enter the number.
 Assume we declare the variable ‘n’ and store the integer value in it.
2)We’ll make a while loop that iterates until the value of ‘n’ is greater than zero.
3)Assume that the value of ‘n’ is 123.
4)When the first iteration is completed, the value of ‘n’ is 123, and the value of the count is increased to 1.
5)The value of ‘n’ will be 12 when the second iteration runs, and the value of the count will be increased to 2.
6)When the third iteration runs, the value of ‘n’ will be 1, and the value of the count will be increased to 3.
7)After the third iteration, the value of ‘n’ becomes zero, and the loop is terminated because it does not satisfy the condition (n!=0).
*/