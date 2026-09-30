/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    // 0 and 1 are not prime numbers
    if (num <= 1) {
        return 0;
    }
    
    // Check for factors up to the square root of the number
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // It is a prime number
}

int main() {
    int n;

    // Read the value of n from the user
    if (scanf("%d", &n) != 1) {
        return 1; // Exit if input is invalid
    }

    // Loop through all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
