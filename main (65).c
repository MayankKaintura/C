/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    // Read size of the array
    if (scanf("%d", &n) != 1) return 1;
    int arr[n];

    // Read array elements
    for(i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    // Read the element to delete
    if (scanf("%d", &key) != 1) return 1;

    // Find and delete the element by value
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            // Shift elements to the left
            for(int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            break; // Stop after deleting the first occurrence
        }
    }

    // Determine the new size to print
    int target_size = found ? (n - 1) : n;

    // Print the modified array
    for(i = 0; i < target_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
