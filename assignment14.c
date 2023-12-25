#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i;
    int *array;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    array = (int*) malloc(n * sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed!");
        return -1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}