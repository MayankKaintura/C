/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void convertDateFormat(const char *input, char *output) {
    int day, year;
    
    // Parse the day and year, ignoring the "04" month part
    if (sscanf(input, "%d/04/%d", &day, &year) == 2) {
        // Format into the destination string with "Apr"
        sprintf(output, "%02d-Apr-%d", day, year);
    } else {
        // Fallback for invalid input format
        sprintf(output, "Invalid Format");
    }
}

int main() {
    // Test case 1
    char input1[] = "15/04/2025";
    char output1[20];
    
    convertDateFormat(input1, output1);
    printf("Input 1: %s\n", input1);
    printf("Output 1: %s\n\n", output1);

    // Test case 2 (Single digit day)
    char input2[] = "05/04/2026";
    char output2[20];
    
    convertDateFormat(input2, output2);
    printf("Input 2: %s\n", input2);
    printf("Output 2: %s\n", output2);

    return 0;
}
