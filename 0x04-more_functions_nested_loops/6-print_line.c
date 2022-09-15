#include "main.h"

/**
 * print_line - print _ in n number of times.
 *@n: input
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
	}

	_putchar('\n');
}
