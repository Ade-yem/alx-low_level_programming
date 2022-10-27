#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the number in decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int a = 0, n;

	if (!b)
		return (0);

	while (b[a] != '\0')
		a++;

	for (a--, n = 1; a >= 0; a--, n *= 2)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		if (b[a] & 1)
			sum += n;
	}
	return (sum);
}
