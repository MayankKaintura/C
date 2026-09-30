/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, new_element;

    // Read the size of the array
    if (scanf("%d", &n) != 1) return 0;

    // Allocate slightly extra space to accommodate the new element
    int arr[n + 1];

    // Read the sorted array elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 0;
    }

    // Read the element to be inserted
    if (scanf("%d", &new_element) != 1) return 0;

    // Shift elements to the right to make space for the new element
    int i = n - 1;
    while (i >= 0 && arr[i] > new_element) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the element at its correct sorted position
    arr[i + 1] = new_element;
    n++; // Increment the size of the array

    // Print the updated array
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
