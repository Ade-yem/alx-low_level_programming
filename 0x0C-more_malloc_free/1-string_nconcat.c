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

	str = malloc(sizeof(char) * (i + j + 2));
	if (str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		str[k] = s1[k];
	if (n >= j)
	{
		for (l = 0; l < j; k++, l++)
			str[k] = s2[l];
	}
	else
	{
		for (l = 0; l < n; k++, l++)
			str[k] = s2[l];
	}
	str[k] = '\0';

	return (str);
}
