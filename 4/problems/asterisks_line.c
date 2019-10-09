#include <stdio.h>

#define MAX_SQUARES 10000

int main(void) {
    
    printf("How many asterisks\n");
    int size;
    scanf("%d", &size);
    
    int i = 0;
    while (i < size) {
        printf("*\n");
        i++;
    }
    
    return 0;
}
