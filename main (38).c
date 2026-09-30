/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, temp, digit;
    int product = 1;

   
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

  
    temp = abs(num);

    
    while (temp > 0) {
        digit = temp % 10; 
        
        if (digit % 2 != 0) { 
            product *= digit;
        }
        
        temp /= 10; 
    }

   
    printf("Product of odd digits: %d\n", product);

    return 0;
}
