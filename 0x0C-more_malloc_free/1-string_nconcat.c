#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (n > j)
		n = j;

	l = i + n;

	str = malloc(sizeof(char) * (l + 2));
	if (str == NULL)
		return (NULL);

	for (k = 0; k < l; k++)
	{
		if (k < i)
			str[k] = s1[k];
		else
			str[k] = s2[k - i];
	}
	str[k] = '\0';

	return (str);
}
