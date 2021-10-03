#include <stdio.h>


/**
 * main - print numbers using putchar
 * followed by a new line.
 *
 * Return: Always (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}

