#include <stdio.h>

int main (void) {
    
    printf("Enter a quadratic of the form a*x^2 + b*x + c = 0\n");
    
    int a;
    int b;
    int c;
    
    printf("a: ");
    scanf("%d", &a);
    
    printf("b: ");
    scanf("%d", &b);
    
    printf("c: ");
    scanf("%d", &c);

    double root1, root2;
    
    printf("The roots are x1 = %lf and x2 = %lf\n", root1, root2);
    
}