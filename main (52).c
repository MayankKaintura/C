/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    

    for (int i = 1; i <= num; i++) {
        int asterisks_in_block;


        if (i <= 3) {
            asterisks_in_block = 2 * i - 1; 
        } else {
            asterisks_in_block = 2 * (num - i + 1) - 1; 
        }

        
        for (int j = 0; j < asterisks_in_block; j++) {
            printf("*\n");
        }

        
        if (i < num) {
            printf("\n");
        }
    }

    return 0;
}
