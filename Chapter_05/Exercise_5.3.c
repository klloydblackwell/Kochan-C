#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
	
	printf ("\nWelcome!\n");
	printf ("This program will compute as many triangular numbers as your heart desires.\n\n");
	
	int index;
	char toggle = 'y';
	char st[3], nd[3], rd[3];
	
	strcpy(st, "st");
	strcpy(nd, "nd");
	strcpy(rd, "rd");
	
	while (tolower(toggle) == 'y')
	{
		printf ("Enter an index: ");
		scanf ("%i", &index);
		
		if (index == 1)
		{
			printf ("\nThe %i%s triangular number is %i. \n\n", index, st, 
						index * (index + 1) / 2);
		}
		else if (index == 2)
		{
			printf ("\nThe %i%s triangular number is %i. \n\n", index, nd, 
						index * (index + 1) / 2);
		}
		else if (index == 3)
		{
			printf ("\nThe %i%s triangular number is %i. \n\n", index, rd, 
						index * (index + 1) / 2);
		}
		else 
		{
			printf ("\nThe %ith triangular number is %i. \n\n", index, 
						index * (index + 1) / 2);
		}
		
		printf ("Would you like another triangular number? (y/n): ");
		scanf ("%s", &toggle);
		printf ("\n");
	}

	printf ("Thanks for visiting! Goodbye! \n");
	
	return 0;
	
}
