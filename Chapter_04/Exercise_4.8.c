#include <stdio.h>
#include <stdlib.h>

int Next_multiple (int i, int j)
{
	int ans = i - ( i % j ) + j;
	
	return ans;
}

int main (int argc, char** argv)
{
	int i = atoi(argv[1]), j = atoi(argv[2]);
	
	printf ("The smallest multiple of %i larger than %i is %i.\n",
				j, i, Next_multiple(i,j));
	
	return 0;
}
