#include <stdio.h>

void inputMatrix(int matrix[10][10], int rows, int cols) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[10][10], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[10][10], int transpose[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[10][10], transpose[10][10];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    inputMatrix(matrix, rows, cols);


    transposeMatrix(matrix, transpose, rows, cols);

    printf("Original Matrix:\n");
    printMatrix(matrix, rows, cols);

    printf("Transposed Matrix:\n");
    printMatrix(transpose, cols, rows);

    return 0;
}
