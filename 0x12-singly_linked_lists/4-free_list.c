#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: node to free
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
