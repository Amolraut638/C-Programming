//write a recursive function to print binary of a given decimal number.
#include<stdio.h>
void decTobinary(int n)
{
    if(n>0){
        decTobinary(n/2);
        printf("%d",n%2);
    }
}
int main(){
    decTobinary(25);
    return 0;
}