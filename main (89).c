/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    int i, len, last_space_idx = -1;

    printf("Enter a full name: ");
    // Reads a full line of text including spaces securely
    fgets(name, sizeof(name), stdin);

    // Remove the newline character added by fgets
    len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    // Find the position of the last space to identify where the surname starts
    for (i = 0; i < len; i++) {
        if (name[i] == ' ') {
            last_space_idx = i;
        }
    }

    printf("Output: ");

    // 1. Print the initials of the preceding names
    // Always print the very first letter as an initial
    if (len > 0 && name[0] != ' ') {
        printf("%c. ", toupper(name[0]));
    }

    // Print the initials of any middle names up until the surname
    for (i = 0; i < last_space_idx; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && (i + 1) < last_space_idx) {
            printf("%c. ", toupper(name[i + 1]));
        }
    }

    // 2. Print the full surname
    if (last_space_idx != -1) {
        // Print everything after the last space
        printf("%s\n", &name[last_space_idx + 1]);
    } else {
        // Fallback if only one name was entered (no spaces)
        printf("\n");
    }

    return 0;
}
