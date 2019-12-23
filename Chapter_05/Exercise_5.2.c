#include <stdio.h>

int main (void)
{
	
	int number;
	
	printf ("Hello! \n");
	printf ("This program will print the first n integer squares.\n\n");
	
	printf ("Please enter a positive integer value for n: ");
	scanf ("%i", &number);
	
	printf ("\n TABLE OF SQUARES \n");
	printf ("   n               n^2 \n");
	printf ("-------          ------- \n");
	
	for (int i = 1; i <= number; i++)
	{
		printf ("%7i          %7i\n", i, i*i);
	}
	
	printf ("\n");
	
	
	return 0;
	
}

