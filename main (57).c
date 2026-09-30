/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the array
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    
    int arr[n];
    int positive = 0;
    int negative = 0;
    int zero = 0;
    
    // Read array elements and count categories
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }
    
    // Print the results in the exact format required
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    
    return 0;
}

