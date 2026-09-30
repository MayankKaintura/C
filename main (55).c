/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Read the number of elements
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int arr[n];

    // Read the array elements and calculate the sum
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Print the final sum
    printf("%d\n", sum);

    return 0;
}
