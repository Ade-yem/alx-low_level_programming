#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, k, l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	s = malloc(sizeof(*s) * (i + j + 2));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		s[k] = s1[k];

	for (l = 0; l <= j; k++, l++)
		s[k] = s2[l];

	return (s);
}
