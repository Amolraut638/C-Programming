//write a program to print the size of a int ,a float ,a char and a double type variable
#include<stdio.h>
int main()
{
    int i;
    float f;
    char c;
    double d;
    printf("The size of int variable is %d bytes\n",sizeof(i));
    printf("The size of float variable is %d bytes\n",sizeof(f));
    printf("The size of char variable is %d bytes\n",sizeof(c));
    printf("The size of double variable is %d bytes",sizeof(d));
    return 0;
}