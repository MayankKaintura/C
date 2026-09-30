/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() 
{
   int n;
   char str[n];
   printf("Enter size:\n");
   scanf("%d",&n);
   printf("Enter a string:\n");
   scanf("%s",str);
   for(int i = 0;i<n;i++)
   {
       printf("%c",str[i]);
       printf("\n");
   }
   return 0;
}