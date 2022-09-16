#include "main.h"

/**
 * print_diagonal - This function draws a triangle
 * on the terminal
 * @size: The number of times the character # should be printed
 */
void print_triangle(int size)
{
	int row, column, space, pound;

	if (size <= 0)
		_putchar('\n');

	for (row = 0; row < size; row++)
	{
		column = size - 1 - row;

		for (space = column; space > 0; space--)
			_putchar(' ');
		for (pound = size - column; pound > 0; pound--)
			_putchar(35);

		_putchar('\n');
	}
}
