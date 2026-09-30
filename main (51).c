/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,i,j;
    printf("Enter the number:");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=(num-i);j++)
        {
            printf(" ");
        }
        
        
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=num;i>=1;i--)
    {
        for(j=1;j<=(num-i);j++)
        {
            printf(" ");
        }
        
        
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}