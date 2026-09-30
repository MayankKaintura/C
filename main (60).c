/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n1, n2;

    // Read the size and elements of the first array
    if (scanf("%d", &n1) != 1) return 0;
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Read the size and elements of the second array
    if (scanf("%d", &n2) != 1) return 0;
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Create a third array to hold the merged result
    int mergedSize = n1 + n2;
    int mergedArr[mergedSize];

    // Copy elements from the first array
    for (int i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }

    // Copy elements from the second array
    for (int i = 0; i < n2; i++) {
        mergedArr[n1 + i] = arr2[i];
    }

    // Print the merged array separated by spaces
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}

