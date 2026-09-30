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
        if(i%2!=0)
        {
            printf("*");
            printf("\n\n");
        }
        else
        {
          for (int j = 0; j < i; j++) 
          {
          printf("*");
          printf("\n");
          }
        }
    }
    return 0;
}