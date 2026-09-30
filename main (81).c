/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char str[100];

    // Read input string from user
    if (fgets(str, sizeof(str), stdin)) {
        // Remove trailing newline character if present
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == '\n') {
                str[i] = '\0';
                break;
            }
        }

        toggleCase(str);

        // Print the modified string
        printf("%s\n", str);
    }

    return 0;
}
