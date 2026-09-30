/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

char findFirstRepeating(char* str) {
    // Array to store the count of each lowercase alphabet (initialized to 0)
    int count[26] = {0};

    // Traverse the string character by character
    for (int i = 0; str[i] != '\0'; i++) {
        // Process only lowercase alphabets
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            
            // If the character has been seen before, it's the first repeating one
            if (count[index] > 0) {
                return str[i];
            }
            
            // Mark the character as seen
            count[index]++;
        }
    }

    // Return a null character if no repeating character is found
    return '\0'; 
}

int main() {
    char str[100];

    // Read the input string
    printf("Enter a string: ");
    scanf("%99s", str);

    char result = findFirstRepeating(str);

    if (result != '\0') {
        printf("Output:\n%c\n", result);
    } else {
        printf("No repeating lowercase character found.\n");
    }

    return 0;
}
