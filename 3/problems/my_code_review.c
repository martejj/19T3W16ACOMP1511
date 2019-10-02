// Harrison Steyn (z5214808)
// prints stuff

#include <stdio.h>

int main(void) {
	int input;
    
    // Scanning number so i can test it.
	printf("Please enter an integer: ");
	
	scanf("%d", &input);
    
	if (input < 1) {
		printf("You entered a number less than one.\n");
	} else if (input == 1) {
		printf("You entered one.\n");
	} else if(input == 2) {
		printf("You entered two.\n");
	}
	else if(input == 3)
	{
		printf("You entered three.\n");
	}
	else if(input == 4)
	{
		printf("You entered four.\n");
	}
	else if(input == 5)
	{
		printf("You entered five.\n");
	}
	else
	{
		printf("You entered a number greater than five.\n");
	}
		
	return 0;
}
