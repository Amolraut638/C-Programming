#include<stdio.h>

int main(void) {
    
    int addition = 0;

    for(int i=1; ;i++) {
        
        int num;
        printf("Enter number %d :", i);
        scanf("%d", &num);

        if(num == 0)
            break;
    
        addition = addition + num;
    }

    printf("Addition is %d\n", addition);

    return 0;
}