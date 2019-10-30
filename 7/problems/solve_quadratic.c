#include <stdio.h>
#include <math.h>

void solve(int a, int b, int c, double *root1, double *root2);

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

    double root1 = 100;
    double root2;
    
    solve(a, b, c, &root1, &root2);
    
    printf("a = %d\n", a);
    
    printf("The roots are x1 = %lf and x2 = %lf\n", root1, root2);
    
}

void solve(int a, int b, int c, double *root1, double *root2) {
    
    double x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
    double x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
    
    printf("root1 = %lf\n", *root1);
    
    *root1 = x1;
    *root2 = x2;
}

