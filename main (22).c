/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int month;


    printf("Enter month number (1-12): ");
    if (scanf("%d", &month) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    switch(month) {
        case 1:
            printf("January, 31 days\n");
            break;
        case 2:
            printf("February, 28 days\n");
            break;
        case 3:
            printf("March, 31 days\n");
            break;
        case 4:
            printf("April, 30 days\n");
            break;
        case 5:
            printf("May, 31 days\n");
            break;
        case 6:
            printf("June, 30 days\n");
            break;
        case 7:
            printf("July, 31 days\n");
            break;
        case 8:
            printf("August, 31 days\n");
            break;
        case 9:
            printf("September, 30 days\n");
            break;
        case 10:
            printf("October, 31 days\n");
            break;
        case 11:
            printf("November, 30 days\n");
            break;
        case 12:
            printf("December, 31 days\n");
            break;
        default:
            printf("Invalid month number! Please enter between 1 and 12.\n");
    }

    return 0;
}
