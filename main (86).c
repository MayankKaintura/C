/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int areRotations(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are different, they cannot be rotations
    if (len1 != len2) {
        return 0;
    }

    // Allocate memory for concatenation (str1 + str1)
    char *temp = (char *)malloc(sizeof(char) * (len1 * 2 + 1));
    if (temp == NULL) {
        return 0; // Memory allocation failed
    }

    // Copy str1 into temp twice
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    char *ptr = strstr(temp, str2);

    // Free allocated memory
    free(temp);

    return (ptr != NULL);
}

int main() {
    char str1[] = "abcde";
    char str2[] = "deabc";

    if (areRotations(str1, str2)) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}
