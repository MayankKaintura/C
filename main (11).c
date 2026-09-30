/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    printf("Enter time in seconds: ");
    if (scanf("%d", &total_seconds) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    hours = total_seconds / 3600;          
    minutes = (total_seconds % 3600) / 60; 
    seconds = total_seconds % 60;          

    printf("Formatted time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
