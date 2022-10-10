#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j, k, l;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	(*new_dog).name = malloc(i + 1);
	(*new_dog).owner = malloc(j + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		new_dog->name[k] = name[k];
	new_dog->name[k] = '\0';

	for (l = 0; l < j; l++)
		new_dog->owner[l] = owner[l];
	new_dog->owner[l] = '\0';
	new_dog->age = age;

	return (new_dog);
}
