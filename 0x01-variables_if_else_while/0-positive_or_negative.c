#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if a number is positive, negative or zero
 * Return: Always (success)
 */
int main(void)
{
<<<<<<< HEAD
	int n;	
=======
	int n;
>>>>>>> 33a9af80ee51574f60bdf29e07ad3026e2e87906
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
