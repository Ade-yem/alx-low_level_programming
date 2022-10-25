#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: linked list pointer
 * Return:  head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *curr;
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);
	temp = *head;
	i = temp->n;
	curr = temp->next;
	free(temp);
	*head = curr;
	return (i);
}
