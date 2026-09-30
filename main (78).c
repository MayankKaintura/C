#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    // Swap characters from both ends moving towards the center
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    // Reads a line of text (including spaces) until a newline is hit
    scanf("%99[^\n]", str); 

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
