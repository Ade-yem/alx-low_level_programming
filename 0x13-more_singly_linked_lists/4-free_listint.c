#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: node to free
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr);

	}
}
