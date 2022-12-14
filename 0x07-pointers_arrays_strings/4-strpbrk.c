#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: string to search
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* if there is a match then break*/
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
