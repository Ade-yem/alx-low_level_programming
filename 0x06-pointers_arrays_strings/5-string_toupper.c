#include "main.h"

/**
 * string_toupper - changes case.
 *@s: input
 * Return: the uppercase string.
 */

char *string_toupper(char *s)
{
	int count = 0, i, j;

	while (s[count] != '\0')
	{
		for (i = 97; i <= 122; i++)
		{
			if (s[count] == i)
			{
				s[count] = i - 32;
			}
		}
		count++;
	}
	return (s);
}
