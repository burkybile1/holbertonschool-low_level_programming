#include <stdio.h>


/**
 * main - will print the alphabet in lowercase
 * in reverse
 * followed by a new line.
 *
 * Return: Always (Success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');
	return (0);
}

