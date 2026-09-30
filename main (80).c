/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    // Reading the string and character from the user
    // Note: %99s reads a single word. To read a full line with spaces, use fgets(str, sizeof(str), stdin)
    scanf("%99s %c", str, &ch);

    // Loop through the string until the null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Printing the final frequency count
    printf("%d\n", count);

    return 0;
}
