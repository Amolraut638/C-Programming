//what will be the value stored in variable x after executing the following expression
//x=!2>-2;
#include<stdio.h>
int main()
{
    int x ;
    x=!2>-2;  // !2 = 0 and 0>-2 = 1 so ans is 1    
    printf("%d\n",x);
    return 0;
}