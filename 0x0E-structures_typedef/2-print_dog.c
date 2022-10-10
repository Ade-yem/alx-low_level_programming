#include "dog.h"
#include <stdio.h>

/**
 *print_dog - prints a struct dog.
 * @d: struct dog.
 *
 * Return: nothing.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nill)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nill)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
