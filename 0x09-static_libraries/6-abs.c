#include "main.h"

/**
 * _abs - check the code.
 * @n: to be checked
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}

	return (n);
}
