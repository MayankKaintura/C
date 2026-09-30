/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

#define ROWS 3
#define COLS 3

void zigzagDiagonalTraversal(int mat[ROWS][COLS], int m, int n) {
    int row = 0, col = 0;
    bool up = true; // Flag to keep track of direction

    for (int i = 0; i < m * n; i++) {
        printf("%d ", mat[row][col]);

        if (up) {
            // Moving up-right
            if (col == n - 1) {       // Hit right boundary
                row++;
                up = false;
            } else if (row == 0) {    // Hit top boundary
                col++;
                up = false;
            } else {
                row--;
                col++;
            }
        } else {
            // Moving down-left
            if (row == m - 1) {       // Hit bottom boundary
                col++;
                up = true;
            } else if (col == 0) {    // Hit left boundary
                row++;
                up = true;
            } else {
                row++;
                col--;
            }
        }
    }
    printf("\n");
}

int main() {
    int mat[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Zigzag Diagonal Traversal:\n");
    zigzagDiagonalTraversal(mat, ROWS, COLS);

    return 0;
}
