#include <stdio.h>
#include <stdlib.h>

int *doCalculations();
int *doOtherCalculations();

void printMemory(int position[], int start, int end);

int main(void) {
    
    int *array = doCalculations();
    
    int *array2 = doOtherCalculations();
    
}

void printMemory(int position[], int start, int end) {
    
    printf("printing memory\n");
    
    int i = start;
    
    while (i < end) {
        printf("%p memory[%d] = %d\n", &(position[i]), i, position[i]);
        i++;
    }
    
}


int *doCalculations() {
    
    int *array = malloc(sizeof(int)*15);
    
    array[0] = 0;
    array[1] = 1;
    array[2] = 2;
    
    array[3] = 3;
    array[4] = 4;
    array[5] = 5;
    array[6] = 6;
    array[7] = 7;
    array[8] = 8;
    
    
    printMemory(array, -15, 15);
    
    return array;
}

int *doOtherCalculations() {
    int array[5] = {-1, -2, -3, -4, -5};
    
    printMemory(array, -15, 15);
    
    return array;
    
}

