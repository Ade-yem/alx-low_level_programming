#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: size of input array
 * @array: input array
 * @cmp: pointer to function
 * Return: index of the first element for which the cmp function does
 * not return 0. If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		int i;

		if (size <= 0)
			return (-1);


		for (i = 0; i < size; i++)
		{
			if (cmp(array[i])) /* if there is a match*/
				return (i);
		}
		return (-1); /* if there is no match*/
	}
	return (-1);
}
