#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog -  initialize a variable of type struct dog.
 * @d: dog struct pointer.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of the dog.
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
