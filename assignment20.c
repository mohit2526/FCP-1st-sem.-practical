#include <stdio.h>

void findDuplicates(int arr[], int size) {
    int i, j;
    int count;
    
    printf("Duplicate elements and their indices:\n");

    for (i = 0; i < size; i++) {
        count = 1;

        // Check for duplicates
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;

                // Display the duplicate element only once
                if (count == 2) {
                    printf("Element %d is duplicate at indices: %d, %d\n", arr[i], i, j);
                } else {
                    printf("                            %d, %d\n", i, j);
                }
            }
        }
    }
}

int main() {
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");

    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findDuplicates(arr, size);

    return 0;
}