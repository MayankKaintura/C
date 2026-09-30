/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num;

   
    if (scanf("%d", &num) != 1) {
        return 1; 
    }

    
    for (int i = 1; i <= num; i++) {
        
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}
