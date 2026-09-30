/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Prevents potential overflow

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;
        }
        // If target is greater, ignore left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    // Element was not present in the array
    return -1;
}

int main() {
    int n, target;

    // Read the size of the array
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    // Read the sorted array elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 0;
    }

    // Read the target element to search for
    if (scanf("%d", &target) != 1) return 0;

    // Perform binary search
    int result = binarySearch(arr, n, target);

    // Print output according to sample test cases
    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}
