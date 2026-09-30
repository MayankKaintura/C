/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void printAllSubstrings(char str[]) {
    int n = strlen(str);

    // Pick the starting point of the substring
    for (int i = 0; i < n; i++) {
        // Pick the length of the substring
        for (int len = 1; len <= n - i; len++) {
            // %.*s takes the length as the first argument 
            // and the starting pointer as the second argument
            printf("%.*s\n", len, &str[i]);
        }
    }
}

int main() {
    char str[] = "abc";
    
    printf("All substrings of \"%s\":\n", str);
    printAllSubstrings(str);
    
    return 0;
}
