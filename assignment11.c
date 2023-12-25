#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("Original value at *ptr: %d\n", *ptr);
    ptr++;
    printf("Value after incrementing *ptr: %d\n\n", *ptr);
    printf("Original value at *ptr: %d\n", *ptr);
    ptr--; 
    printf("Value after decrementing *ptr: %d\n\n", *ptr);
     printf("Original value at *ptr: %d\n", *ptr);
    ptr = ptr + 2; 
    printf("Value after adding 2 to *ptr: %d\n\n", *ptr);
     printf("Original value at *ptr: %d\n", *ptr);
    ptr = ptr - 1; 
    printf("Value after subtracting 1 from *ptr: %d\n\n", *ptr);
     int *ptr2 = &arr[2];
    printf("Original value at *ptr: %d\n", *ptr);
    printf("Original value at *ptr2: %d\n", *ptr2);
    int result = ptr2 - ptr;
    printf("Result of subtracting two pointers: %d\n", result);
    return 0;
}