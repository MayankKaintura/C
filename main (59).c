/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move pointers toward the center
        start++;
        end--;
    }
}

int main() {
    int n;
    // Read the size of the array
    if (scanf("%d", &n) != 1) return 0;
    
    int arr[n];
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Reverse the array in place
    reverseArray(arr, n);
    
    // Print the reversed array
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
