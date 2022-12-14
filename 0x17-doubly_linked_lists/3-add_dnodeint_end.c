#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: linked list
 * @n: new node data
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	/* if head is null make new the head */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	/* traverse through the link */
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;
	return (*head);
}
