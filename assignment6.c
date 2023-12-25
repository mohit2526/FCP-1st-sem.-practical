#include <stdio.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


void generateFibonacciSeries(int n) {
    printf("Fibonacci series up to %d terms: ", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    // Get input from the user for the number of terms
    int n;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    // Generate and print the Fibonacci series
    generateFibonacciSeries(n);

    return 0;
}
