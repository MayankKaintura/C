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
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the previous greater element for each element
    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

        // Check elements to the left of arr[i], starting from the nearest one
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break; // Stop as soon as the nearest greater element is found
            }
        }

        // Print the result in comma-separated format
        if (i == n - 1) {
            printf("%d", prevGreater);
        } else {
            printf("%d, ", prevGreater);
        }
    }

    printf("\n");
    return 0;
}
