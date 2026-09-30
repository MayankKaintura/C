/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int rows, cols;

    // Read the dimensions of the matrix
    if (scanf("%d %d", &rows, &cols) != 2) {
        return 1;
    }

    int matrix[rows][cols];
    int rowSums[rows];

    // Read the matrix elements and calculate row sums
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0; // Initialize the sum for the current row
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j]; // Accumulate the sum
        }
    }

    // Print the row sums array
    for (int i = 0; i < rows; i++) {
        printf("%d", rowSums[i]);
        if (i < rows - 1) {
            printf(" "); // Print space between elements
        }
    }
    printf("\n");

    return 0;
}
