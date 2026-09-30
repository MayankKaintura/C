/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int found_even = 0;
   
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    
    for (int i = 1; i <= n; i++) {
        
        if (i % 2 == 0) {
            product *= i;
            found_even = 1;
        }
    }

    
    if (found_even) {
        printf("%lld\n", product);
    } else {
        printf("0\n"); 
    }

    return 0;
}
