#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string from which search
 * @accept: string to search
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k, l;

	while (*(s + i) != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		l = 1;
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + j) == *(accept + k))
			{
				/* if match return l = 0 & break out of the loop*/
				l = 0;
				break;
			}
		}
		/* else break out of the loop if no match */
		if (l == 1)
			break;
	}
	return (j);
}
