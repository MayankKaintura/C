/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Enter the first number:");
    int num1;
    scanf("%d",&num1);
    int num2;
    printf("Enter the second number:");
    scanf("%d",&num2);
    int sum= num1+num2;
    printf("The sum of two numbers is:%d",sum);
    return 0;
}
