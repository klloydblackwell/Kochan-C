#include <stdio.h>

int main (void)
{
	int number, number_copy, collector;
	
	printf ("\nWelcome! \n");
	printf ("This program will sum the digits of any positive integer.\n\n");
	
	printf ("Please enter a positive integer: ");
	scanf ("%i", &number);
	printf("\n");
	
	collector = 0;
	
	// Copy number for manipulation while retaining user input
	number_copy = number;
	
	while (number_copy != 0)
	{
		collector += number_copy % 10;
		number_copy /= 10;
	}
	
	printf("The summed digits of %i is %i.\n\n", number, collector);
	
	
	return 0;
}
