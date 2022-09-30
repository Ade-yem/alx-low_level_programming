#include "main.h"

/**
 * _isalpha - checks if an input is alphabet
 * @c: input to be checked
 * Return: 1 if true and 0 if false
 */

int _isalpha(int c)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (c == i || c == j)
			{
				return (1);
			}
		}
	}
	return (0);
}
