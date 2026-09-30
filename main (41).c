/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

   
    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

   
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
           
            double numerator = 2 * i - 1;
            double denominator = 2 * i - 2;
            sum += numerator / denominator;
        }
    }

    
    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
