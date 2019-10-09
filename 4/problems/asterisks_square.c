#include <stdio.h>

#define MAX_SQUARES 10000

int main(void) {
    
    printf("How many asterisks\n");
    int size;
    scanf("%d", &size);
    
    int i = 0;
    int j = 0;
    while (i < size) {
        j = 0;
        while (j < size) {
            if (i == j) {
                printf("*");
            } else {
                printf("_");
            }
            j++;
        }
        
        printf("\n");
        
        i++;
    }
    
    return 0;
}
