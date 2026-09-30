/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h> 

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest, final_amount;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    simple_interest = (principal * rate * time) / 100;

    final_amount = principal * pow((1 + rate / 100), time);
    compound_interest = final_amount - principal;

    printf("\n--- Results ---\n");
    printf("Simple Interest: %.2lf\n", simple_interest);
    printf("Compound Interest: %.2lf\n", compound_interest);
    printf("Total Amount (with Compound Interest): %.2lf\n", final_amount);

    return 0;
}
