#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Evaluates if number is equal to zero, positive, or negative then prints results.
 *
 * Return: Always (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	

	return (0);
}
