/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int find_lcm(int a, int b) {
    
    if (a == 0 || b == 0) {
        return 0;
    }
    return (a * b) / find_gcd(a, b);
}

int main() {
    int num1, num2;

   
    if (scanf("%d %d", &num1, &num2) == 2) {
       
        int lcm = find_lcm(num1, num2);
        printf("%d\n", lcm);
    }

    return 0;
}
