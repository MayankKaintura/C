/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NO_OF_CHARS 256

// Function to check if two strings are anagrams
bool areAnagrams(char *str1, char *str2) {
    int count[NO_OF_CHARS] = {0};
    int i;

    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    // Count frequencies of characters in both strings
    for (i = 0; str1[i] && str2[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    // If all counts are 0, then the strings are anagrams
    for (i = 0; i < NO_OF_CHARS; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    // Test Case 1
    char str1[] = "listen";
    char str2[] = "silent";

    if (areAnagrams(str1, str2)) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    // Test Case 2
    char str3[] = "hello";
    char str4[] = "world";

    if (areAnagrams(str3, str4)) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
