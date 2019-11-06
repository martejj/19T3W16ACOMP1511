#include<stdio.h>

int main(void) {

    int array[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    int i = -15;

    while (i < 20) {
        printf("%p memory[%d] = %d\n", &(array[i]), i, array[i]);
        i++;
    }
    
}
