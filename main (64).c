/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, arr[100], position, element;

    // Read the number of elements
    if (scanf("%d", &n) != 1) return 1;

    // Read the array elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    // Read the target position and the element to insert
    if (scanf("%d %d", &position, &element) != 1) return 1;

    // Shift elements to the right from the end up to the target position
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the target position
    arr[position] = element;
    
    // Increment the size of the array
    n++; 

    // Print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
