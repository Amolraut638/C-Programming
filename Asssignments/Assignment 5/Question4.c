//write a progran to make the last digit of the number stored in variable as zero
//eg. input =1234  output=1230
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    //b=a/10;
    ///b=b*10;
    printf("%d",a/10*10);


    return 0;
}