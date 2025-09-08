//what will be the value stored in variable x after executing the following expression
//x=10>8>4;
#include<stdio.h>
int main()
{
    int x ;
    x=10>8>4;  //10>0 = 1 and 1>4 = 0  so ans is 0
    printf("%d\n",x);
    return 0;
}