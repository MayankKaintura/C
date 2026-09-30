/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, sum = 0;
    int current_odd = 1;

   
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        sum += current_odd;
        current_odd += 2; 
    }

 
    printf("%d\n", sum);

    return 0;
}
