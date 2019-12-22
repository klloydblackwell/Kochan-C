#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Raises a float to a positive integer power.
*/
float intPower (float base, int power)
{
	float collector = base;
	int n;
	
	for ( n = 1; n <= power - 1; n += 1 )
		collector *= base;
	
	return collector;
} 

/*
Accepts a float argument and computes the value of a fixed polynomial.
*/
int main (int argc, char** argv)
{
	
	float x = strtof(argv[1], NULL), collector;
	
	collector = 3.0 * intPower(x, 3) - 5.0 * intPower(x, 2) + 6.0;
	
	printf ("The polynomial 3x^3 - 5x^2 + 6 evaluated at x = %g yields %g.\n",
				x, collector);
	
	return 0;
}
