// Johanna Then (z5204842)
// Returns the entered integers in reverse order.

#include <stdio.h>
#define MAX_NUMBER 100

int main (void) {

    int numbers[MAX_NUMBER] = {0};
    int counter = 0;
    int result = 1;
    
    printf("Enter numbers forwards:\n");

    while (result == 1) {
        result = scanf("%d", &numbers[counter]);
        counter++;
    }
//
    counter = counter - 1;
    
    printf("Reversed: \n");
    
    while (counter >= 0) {
        printf("%d\n", numbers[counter]);
        counter--;
    }
    
    return 0;

}
