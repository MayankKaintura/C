/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int side1, side2, side3;

    if (scanf("%d %d %d", &side1, &side2, &side3) != 3) {
        printf("Invalid Input\n");
        return 1;
    }

   
    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0;
}
