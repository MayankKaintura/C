/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0) {
            printf("zero\n");
        } else {
            printf("positive\n");
        }
    } else {
        printf("negative\n");
    }

    return 0;
}
