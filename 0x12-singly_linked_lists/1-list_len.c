#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t
 * @h: list pointer
 * Return: the number of elements in a linked list_t
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
