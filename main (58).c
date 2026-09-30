/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i, key, found = -1;

    // Read size of array
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to search
    scanf("%d", &key);

    // Perform linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break; // Exit loop once found
        }
    }

    // Print result
    if (found != -1) {
        printf("Found at index %d\n", found);
    } else {
        printf("-1\n");
    }

    return 0;
}
