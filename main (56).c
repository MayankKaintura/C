/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, sum = 0;
    int arr[n];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("The maximum is %d",max);
    printf("\n");
    printf("The minimum is %d",min);
    return 0;
}
