/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitials(char name[]) {
    int length = strlen(name);
    
    if (length == 0) {
        return;
    }

    // 1. Print the first character if it's not a space
    if (name[0] != ' ') {
        printf("%c", toupper(name[0]));
    }

    // 2. Traverse the rest of the string and look for spaces
    for (int i = 1; i < length; i++) {
        // If the current character is a space, the next character is an initial
        if (name[i - 1] == ' ' && name[i] != ' ') {
            printf(" %c", toupper(name[i]));
        }
    }
    printf("\n");
}

int main() {
    // Large enough buffer to safely handle typical full names
    char name[100];

    printf("Enter a full name: ");
    
    // Read the line including spaces, avoiding unsafe functions like gets()
    if (fgets(name, sizeof(name), stdin)) {
        // Remove trailing newline character added by fgets
        name[strcspn(name, "\n")] = '\0';
        
        printf("Initials: ");
        printInitials(name);
    }

    return 0;
}

