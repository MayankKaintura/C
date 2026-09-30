/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int i,j,n;
    printf("Enter the integer:");
    scanf("%d",&n);
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=5-i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}