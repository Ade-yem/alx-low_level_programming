#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @array: input array
 * @size: size of array
 * @action: function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size != 0 && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
