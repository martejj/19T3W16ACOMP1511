#include <stdio.h>

int main(void) {

    char input;
    int sum = 0;
    
    while ((input = getchar()) != EOF) {
        
        if (input >= '0' && input <= '9') {
        
            sum += input;
        
        }
        
    }
    
    printf("summed to: %c\n", sum);

}
