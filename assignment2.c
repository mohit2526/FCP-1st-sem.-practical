#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void multiplyMatrices(int firstMatrix[MAX_ROWS][MAX_COLS], int secondMatrix[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rowsFirst, int colsFirst, int rowsSecond, int colsSecond);

int main() {
    int firstMatrix[MAX_ROWS][MAX_COLS], secondMatrix[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int rowsFirst, colsFirst, rowsSecond, colsSecond;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowsFirst, &colsFirst);

    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rowsFirst; ++i) {
        for (int j = 0; j < colsFirst; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rowsSecond, &colsSecond);

    if (colsFirst != rowsSecond) {
        printf("Error! Number of columns in the first matrix should be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rowsSecond; ++i) {
        for (int j = 0; j < colsSecond; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, result, rowsFirst, colsFirst, rowsSecond, colsSecond);

    // Displaying the multiplication result
    printf("\nResultant matrix:\n");
    for (int i = 0; i < rowsFirst; ++i) {
        for (int j = 0; j < colsSecond; ++j) {
            printf("%d\t", result[i][j]);
            if (j == colsSecond - 1)
                printf("\n");
        }
    }

    return 0;
}

void multiplyMatrices(int firstMatrix[MAX_ROWS][MAX_COLS], int secondMatrix[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rowsFirst, int colsFirst, int rowsSecond, int colsSecond) {
    for (int i = 0; i < rowsFirst; ++i) {
        for (int j = 0; j < colsSecond; ++j) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < rowsFirst; ++i) {
        for (int j = 0; j < colsSecond; ++j) {
            for (int k = 0; k < colsFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
