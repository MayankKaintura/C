/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    
    // Read input
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    // Total sum of numbers from 1 to n
    int totalSum = n * (n + 1) / 2;
    
    // Find the integer square root of totalSum
    int x = (int)sqrt(totalSum);

    // Check if totalSum is a perfect square
    if (x * x == totalSum) {
        printf("%d\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}
