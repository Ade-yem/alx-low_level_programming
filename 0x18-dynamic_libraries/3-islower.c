#include "main.h"

/**
 * _islower - checks if an input is lower case
 * @c: character to be checked
 * Return: 1 if int c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);

}
