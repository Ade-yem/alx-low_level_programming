#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: linked list
 * @n: new node data
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	/* add data to the node */
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	/* make node the head*/
	return (*head);
}
