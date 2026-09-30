/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

// Function to reverse a specific portion of a string
void reverseWord(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Function to iterate through the sentence and find words
void reverseEachWord(char* str) {
    char* word_start = str;
    char* temp = str;

    while (*temp) {
        // If we reach a space, reverse the word found so far
        if (*temp == ' ') {
            reverseWord(word_start, temp - 1);
            word_start = temp + 1; // Move start to the beginning of the next word
        }
        temp++;
    }
    // Reverse the last word of the sentence
    reverseWord(word_start, temp - 1);
}

int main() {
    char str[100];

    printf("Input: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character added by fgets if present
    str[strcspn(str, "\n")] = '\0';

    reverseEachWord(str);

    printf("Output: %s\n", str);

    return 0;
}
