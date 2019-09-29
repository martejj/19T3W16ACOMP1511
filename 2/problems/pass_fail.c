#include <stdio.h>

int main (void) {
    
    printf("Please enter a number: ");

    double number;
    scanf("%lf", &number);
    
    if (number >= 50 && number <= 100) {
    
        printf("PASS\n");
        
    } else if (number >= 0 && number <= 50) {
    
        printf("FAIL\n");
        
    } else {
    
        printf("ERROR\n");
        
    }
    
    return 0;

}
