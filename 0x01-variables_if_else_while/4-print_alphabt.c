#include <stdio.h>


/**
 * main - will print the alphabet in lowercase
 * followed by a new line.
 *
 * Return: Always (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if ((c != 'q') && (c != 'e'))
			putchar(c);
	}

	putchar('\n');
	return (0);
}
