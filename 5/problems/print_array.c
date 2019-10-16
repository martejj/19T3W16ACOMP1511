#include <stdio.h>

void print_array(int array[], int length);
int scan_array(int array[]);

int main(void) {
    int length;
    int input[100];
    
    length = scan_array(input);
    print_array(input, length);
    
    return 0;
}

int scan_array(int array[]) {

    int nInputs = 0;
    
    printf("Enter a number: \n");
    
    while (scanf("%d", &array[nInputs]) == 1) {
        printf("Enter a number: \n");
        nInputs++;
    }
    
    return nInputs;
}

void print_array(int array[], int length) {
    
    int counter = 0;
    
    while (counter < length) {
        printf("%d\n", array[counter]);
        counter++;
    }
    
}

