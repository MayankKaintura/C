/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int r, c;
    
    // Read the number of rows and columns
    if (scanf("%d %d", &r, &c) != 2) {
        return 1;
    }
    
    int matrix[r][c];
    
    // Input the matrix elements
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Print the transpose of the matrix
    // By looping column-first, we flip rows into columns directly during output
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            printf("%d", matrix[i][j]);
            if (i < r - 1) {
                printf(" "); // Space-separated values
            }
        }
        printf("\n"); // Newline after each row of the transposed matrix
    }
    
    return 0;
}
