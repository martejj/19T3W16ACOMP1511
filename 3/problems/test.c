#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main(void) {
    if (TRUE) {
        printf("a\n");    
    }
    return 0;
}
