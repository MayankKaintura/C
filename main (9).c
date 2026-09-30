/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Natural numbers start from 1. Please enter a valid number.\n");
        return 1; 
    }

    for (i = 1; i <= n; ++i) {
        sum += i; 
    }

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

