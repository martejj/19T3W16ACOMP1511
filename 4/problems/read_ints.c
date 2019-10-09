#include <stdio.h>

int main(void) {

    int input;
    int nInputs = 0;
    
    while (scanf("%d", &input) == 1) {
        nInputs++;
    }
    
    printf("%d\n", nInputs);
    return 0;
}
