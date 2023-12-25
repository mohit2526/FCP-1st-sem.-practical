#include <stdio.h>

void reverseString(char str[], int length);

int main() {
    char inputString[100];
    
    // Input a string
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Calculate the length of the string
    int length = 0;
    while (inputString[length] != '\0') {
        length++;
    }

    // Reverse the string
    reverseString(inputString, length);

    // Display the reversed string
    printf("Reversed string: %s\n", inputString);

    return 0;
}

// Function to reverse a string
void reverseString(char str[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters at start and end indices
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move indices towards the center
        start++;
        end--;
    }
}
