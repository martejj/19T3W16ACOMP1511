#include <stdio.h>

int main(void) {

    int m;
    scanf("%d", &m);
    
    int n;
    scanf("%d", &n);    
    
    int i = m;
    while (i <= n) {
    
        printf("%d\n", i);
        i++;
    
    }
    
    return 0;
}
