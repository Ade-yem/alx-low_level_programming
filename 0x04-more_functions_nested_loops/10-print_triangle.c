#include "main.h"

/**
 * print_diagonal - This function draws a triangle
 * on the terminal
 * @size: The number of times the character # should be printed
 */
void print_triangle(int size)
{
	/* # and space variable */
	int sl, sp;

	if (size > 0)
	{
		for (sl = 0; sl < size; sl++)
		{
			for (sp = 1; sp < (size - sl); sp++)
				_putchar(' ');

			for (sp--; sp < size; sp++)
				_putchar('#');
			if (sl < (size - 1))
				_putchar('\n');
		}
	}

   	_putchar('\n');
}
