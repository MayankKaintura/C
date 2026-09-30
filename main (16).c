/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char ch;


    printf("Input: ");
    scanf("%c", &ch);


    if (ch >= 'A' && ch <= 'Z') {
        printf("Output: Uppercase alphabet\n");
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("Output: Lowercase alphabet\n");
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("Output: Digit\n");
    } 
    else {
        printf("Output: Special character\n");
    }

    return 0;
}
