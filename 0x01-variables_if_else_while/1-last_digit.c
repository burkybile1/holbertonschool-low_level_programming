#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Evaluates if number is equal to zero, positive,
 *  or negative then prints result.
 *
 * Return: Always (success)
 */
int main(void)
{
	int n;
	int lastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDig = n % 10;

	if ((n < 6) && (n != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDig);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDig);
	else if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDig);

	return (0);
}
