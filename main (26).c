/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num1, num2;
    char op;

   
    if (scanf("%d %d %c", &num1, &num2, &op) == 3) {
        switch (op) {
            case '+':
                printf("%d\n", num1 + num2);
                break;
            case '-':
                printf("%d\n", num1 - num2);
                break;
            case '*':
                printf("%d\n", num1 * num2);
                break;
            case '/':
                if (num2 != 0) {
                    printf("%d\n", num1 / num2);
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            case '%':
                if (num2 != 0) {
                    printf("%d\n", num1 % num2);
                } else {
                    printf("Error: Modulus by zero\n");
                }
                break;
            default:
                printf("Error: Invalid Operator\n");
        }
    }
    return 0;
}
