#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the linked list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr);
	}
}
