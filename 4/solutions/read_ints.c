#include <stdio.h>

int main(void) {
     
    /*
    int input;
    int nScanned;
    int nInputs = 0;

    nScanned = scanf("%d", &input);

    while (nScanned == 1) {
        nInputs++;
        nScanned = scanf("%d", &input);
    }

    printf("%d\n", nInputs);
    */

    int input;
    int nInputs = 0;

    while (scanf("%d", &input) == 1) {
        nInputs++;
    }

    printf("%d\n", nInputs);

    return 0;
}