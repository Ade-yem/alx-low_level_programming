#include "main.h"

/**
 * rot13 - check the code.
 * @s: input
 * Return: the encoded string.
 */

char *rot13(char *s)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[count] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[count] == alphabet[i])
			{
				s[count] = rot13[i];
				break;
			}
		}

		count++;
	}
	return (s);
}
