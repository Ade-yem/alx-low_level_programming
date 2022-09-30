#include "main.h"

/**
 * _strcat - appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest, and then adds
 * a terminating null byte.
 * @dest: destination string
 *@src: string to concatenate
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
