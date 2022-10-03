#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: NULL if str = NULL.
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *strn;
	unsigned int i = 0, j;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	strn = (char *)malloc(sizeof(char) * (i + 1));

	if (strn == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strn[j] = str[j];

	return (strn);
}
