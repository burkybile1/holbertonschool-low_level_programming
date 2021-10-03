#include <stdio.h>


/**
 * main - print base 16 numbers using putchar
 * followed by a new line.
 *
 * Return: Always (Success)
 */

int main(void)
{
	int i;
	char c;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
