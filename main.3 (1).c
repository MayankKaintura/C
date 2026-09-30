/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1;
    printf("Enter the num1:");
    scanf("%d",&num1);
    int num2;
    printf("Enter the num2:");
    scanf("%d",&num2);
    int sum = num1 + num2;
    int product = num1*num2;
    int difference= num1-num2;
    int quotient=num1/num2;
    printf("Sum:%d\n",sum);
    printf("Product:%d\n",product);
    printf("Difference:%d\n",difference);
    printf("Quotient:%d\n",quotient);
    return 0;
}
