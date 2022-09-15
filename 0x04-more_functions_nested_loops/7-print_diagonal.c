#include "main.h"

/**
 * print_diagonal - print diagonal line.
 *@n: input n number of times
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{

				_putchar(' ');
			}
			_putchar('\\');

			if (i < (n - 1))
				_putchar('\n');
		}
	}

	_putchar('\n');
}
