/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int first, second, temp;

    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    printf("\nBefore swapping:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    temp = first;   
    first = second; 
    second = temp;  

    printf("\nAfter swapping:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    return 0;
}
