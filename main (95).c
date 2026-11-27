/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the next greater element using nested loops
    for (int i = 0; i < n; i++) {
        int nextGreater = -1;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; // Stop at the nearest greater element on the right
            }
        }

        // Print the result in a comma-separated fashion
        if (i == n - 1) {
            printf("%d", nextGreater);
        } else {
            printf("%d, ", nextGreater);
        }
    }
    printf("\n");

    return 0;
}
