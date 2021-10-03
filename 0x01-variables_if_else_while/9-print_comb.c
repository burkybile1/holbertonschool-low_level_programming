#include <stdio.h>


/**
 * main - print numbers using putchar
 * with a , and space followed by a new line.
 *
 * Return: Always (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
