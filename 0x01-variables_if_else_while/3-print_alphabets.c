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
	char d;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);

	putchar('\n');
	return (0);
}
