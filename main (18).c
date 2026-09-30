/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

   
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }


    discriminant = b * b - 4 * a * c;

    
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
       
        printf("Roots are real and different: ");
        if (root1 == (int)root1) printf("%.0f, ", root1);
        else printf("%.2f, ", root1);
        
        if (root2 == (int)root2) printf("%.0f\n", root2);
        else printf("%.2f\n", root2);
    }
    
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        
        printf("Roots are real and same: ");
        if (root1 == (int)root1) printf("%.0f\n", root1);
        else printf("%.2f\n", root1);
    }
    
    else {
        printf("Roots are complex\n");
    }

    return 0;
}
