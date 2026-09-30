/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n;

    // Read the size of the array
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int arr[n];

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" "); // Print space between elements
        }
    }
    printf("\n"); // Print a newline at the end

    return 0;
}
