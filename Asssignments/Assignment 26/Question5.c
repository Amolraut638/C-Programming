//write a recursive function to print reverse of a given number
#include<stdio.h>
void reverse(int n)
{
    if(n>0){
        printf("%d",n%10);
        reverse(n/10);
    }
}

int main(){
    reverse(123456);
    return 0;
}