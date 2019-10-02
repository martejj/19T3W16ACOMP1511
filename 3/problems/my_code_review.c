#include <stdio.h>

int main()
{
	int x;
    
    // Scanning number so i can test it.
	printf("Please enter an integer: ");
	
	scanf("%d", &x);
    
	if (x < 1) {
		printf("You entered a number less than one.\n");
	} else if (x == 1) {
		printf("You entered one.\n");
	}
	else if(x == 2)
	{
		printf("You entered two.\n");
	}
	else if(x == 3)
	{
		printf("You entered three.\n");
	}
	else if(x == 4)
	{
		printf("You entered four.\n");
	}
	else if(x == 5)
	{
		printf("You entered five.\n");
	}
	else
	{
		printf("You entered a number greater than five.\n");
	}
		
	return 0;
}
