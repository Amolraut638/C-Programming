//write a function to print first N terms of fibonacci series.(TSRN)
#include<stdio.h>
void fibonacci(int);
int main(){
    int x;
    printf("Enter the value of n:");
    scanf("%d",&x);
    fibonacci(x);
    return 0;
}

void fibonacci(int n){
    int a=-1,b=1,c;
    while(n){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        n--;
    }
}

