/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, num;

    printf("Enter num: ");
    scanf("%d", &num);

    for(i=num; i>=1; i--)
    {
        // Logic to print numbers
        for(j=i; j<=num; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}