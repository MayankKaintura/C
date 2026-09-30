/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i, is_prime = 1;

    
    if (scanf("%d", &n) != 1) {
        return 1;
    }

   
    if (n <= 1) {
        is_prime = 0;
    } else {
       
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0; 
                break;        
            }
        }
    }

    
    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}
