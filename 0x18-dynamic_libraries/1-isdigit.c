#include "main.h"

/**
 * _isdigit - check if input is a digit.
 *@c: input
 * Return: 1 if input is a digit and 0 if not
*/

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);

}
