/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x;
    printf("Enter first number\n");
    scanf("%d",&x);
    int y;
    printf("Enter second number\n");
    scanf("%d",&y);
    int sum = x+y;
    printf("The sum of two numbers %d",sum);

    return 0;
}