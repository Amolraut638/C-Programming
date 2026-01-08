#include <stdio.h>

void reverse_array(int *start, int size) {
    int *end = start + size - 1; 

    int temp; 

    while (start < end) {
        temp = *start; 
        *start = *end; 
        *end = temp; 

        start++; 
        end--;   
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    // Call the reversal function
    reverse_array(arr, n); 

    printf("\nReversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}