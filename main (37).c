/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    
    if (num < 0) {
        num = -num;
    }

   
    while (num > 0) {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }

    printf("%d\n", sum);

    return 0;
}
