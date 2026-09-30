/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float cp, sp, profit, loss, percentage;

    if (scanf("%f %f", &cp, &sp) != 2) {
        return 1;
    }

  
    if (sp > cp) {
        profit = sp - cp;
        percentage = (profit / cp) * 100;
        printf("Profit %.0f%%\n", percentage);
    } 
    else if (cp > sp) {
        loss = cp - sp;
        percentage = (loss / cp) * 100;
        printf("Loss %.0f%%\n", percentage);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
