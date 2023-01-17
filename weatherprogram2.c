#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 5, cols = 12;
    int i, j;
    int array[rows][cols];
    int row_sum[rows], col_sum[cols];

    // initialize array with random values
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            array[i][j] = rand() % 100;
        }
    }

    // calculate sum of each row and column
    for (i = 0; i < rows; i++) {//rows here = 5
       row_sum[i] = 0;
        for (j = 0; j < cols; j++) { //cols here is = 12
            row_sum[i] += array[i][j];
            col_sum[j] += array[i][j];
        }
    }

    // print array
    printf("Array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // print sum of rows and columns
    printf("Sum of rows:\n");
    for (i = 0; i < rows; i++) {
        printf("%d ", row_sum[i]);
    }
    printf("\n");

    printf("Sum of columns:\n");
    for (j = 0; j < cols; j++) {
        printf("%d ", col_sum[j]);
    }
    printf("\n");

    return 0;
}
