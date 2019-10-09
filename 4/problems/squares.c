#include <stdio.h>

#define MAX_SQUARES 10000

int main(void) {
    
    int squares[MAX_SQUARES];
    
    int i = 0;
    
    while (i < MAX_SQUARES) {
        squares[i] = i*i;
        i++;
    }
    
    int n;
    scanf("%d", &n);
    
    i = 0;
    
    while (i <= n) {
        printf("%d\n", squares[i]);
        i++;
    }
    
    return 0;
}
