/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int findMostFrequentDigit(long long n) {
    int count[10] = {0};
    
    // Handle negative numbers
    if (n < 0) {
        n = -n;
    }
    
    // Handle the case when the number is 0
    if (n == 0) {
        return 0;
    }
    
    // Count the frequency of each digit
    while (n > 0) {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }
    
    // Find the digit with the maximum frequency
    // In case of a tie, we pick the smallest digit to match the test cases
    int maxDigit = 0;
    int maxCount = count[0];
    
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }
    
    return maxDigit;
}

int main() {
    long long num;
    
    // Read the input number
    if (scanf("%lld", &num) == 1) {
        // Output the result
        printf("%d\n", findMostFrequentDigit(num));
    }
    
    return 0;
}
