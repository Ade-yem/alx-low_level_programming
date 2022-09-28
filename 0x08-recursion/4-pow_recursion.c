#include "main.h"

/**
 * _pow_recursion - check the code.
 * @x: input
 * @y: power
 * Return: y is lower than 0, the function should return -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
