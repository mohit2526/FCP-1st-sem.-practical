#include <stdio.h>
#include<math.h>
typedef float (*ArithmeticFunction)(float, float);

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main() {
    float num1, num2, result;
    int choice;

    
    ArithmeticFunction arithmeticFunctions[] = {add, subtract, multiply, divide};

    
    printf("Select an arithmetic operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    
    if (choice >= 1 && choice <= 4) {
        result = arithmeticFunctions[choice - 1](num1, num2);
        printf("Result: %.2f\n", result);
    } else {
        printf("Invalid choice. Please enter a number between 1 and 4.\n");
    }

    return 0;
}