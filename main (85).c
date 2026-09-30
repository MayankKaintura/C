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
    char sentence[100];
    char longest[100] = "";
    char current[100] = "";
    int i, j = 0;

    // Read a full line of text from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the trailing newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    for (i = 0; i <= strlen(sentence); i++) {
        // Check if the character is alphanumeric
        if (isalnum(sentence[i])) {
            current[j++] = sentence[i];
        } 
        // If it's a space or end of string, we found a word boundary
        else if (sentence[i] == ' ' || sentence[i] == '\0') {
            current[j] = '\0'; // Null-terminate the current word

            // If the current word is longer than the saved longest word, update it
            if (strlen(current) > strlen(longest)) {
                strcpy(longest, current);
            }
            j = 0; // Reset index for the next word
        }
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
