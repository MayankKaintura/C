/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


long long getFactorial(int digit) {
    long long fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, lastDigit;
    long long sum = 0;

    
    printf("Input: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    
    originalNum = num;

    
    if (num < 0) {
        printf("Output: Not strong number\n");
        return 0;
    }

    
    while (num > 0) {
        lastDigit = num % 10;      
        sum += getFactorial(lastDigit); 
        num = num / 10;           
    }

     if (sum == originalNum) {
        printf("Output: Strong number\n");
    } else {
        printf("Output: Not strong number\n");
    }

    return 0;
}
