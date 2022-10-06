#include <stdlib.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 2));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
