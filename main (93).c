/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Function to find the first or last occurrence of target
int findOccurrence(int nums[], int n, int target, int findFirst) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            result = mid; // Potential answer found
            if (findFirst) {
                high = mid - 1; // Keep searching on the left side
            } else {
                low = mid + 1;  // Keep searching on the right side
            }
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, target;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target value
    printf("Enter the target: ");
    scanf("%d", &target);

    int first = findOccurrence(nums, n, target, 1);
    int last = findOccurrence(nums, n, target, 0);

    // Output formatting matching the sample test cases
    if (first == -1) {
        printf("\"-1,-1\"\n");
    } else {
        printf("%d,%d\n", first, last);
    }

    return 0;
}
