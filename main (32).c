/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, digits = 0;
    double result = 0.0;

    
    if (scanf("%d", &num) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    originalNum = num;

    
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    
    while (originalNum != 0) {
        remainder = originalNum % 10;
        
        result += round(pow(remainder, digits));
        originalNum /= 10;
    }

    
    if ((int)result == num) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
