/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    
    // Read the dimensions of the matrix
    if (scanf("%d %d", &rows, &cols) != 2) {
        return 1;
    }
    
    // A matrix can only be symmetric if it is a square matrix
    if (rows != cols) {
        printf("False\n");
        return 0;
    }
    
    int matrix[rows][cols];
    
    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Check for symmetry
    bool isSymmetric = true;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }
    
    // Output the result matching the test cases
    if (isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
