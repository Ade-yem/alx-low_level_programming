#include "main.h"

/**
 * _isupper - checks if c is upper case.
 *@c: input
 * Return: 1 if input is uppercase and 0 if not.
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
