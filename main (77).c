/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Reading the input string
    printf("Enter a lowercase string: ");
    scanf("%s", str);

    // Loop through each character of the string
    while (str[i] != '\0') {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32
            str[i] = str[i] - 32;
        }
        i++;
    }

    // Printing the uppercase string
    printf("Output: %s\n", str);

    return 0;
}
