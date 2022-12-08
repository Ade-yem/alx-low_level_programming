#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @idx: is the index of the list where the new node should be added.
 * @h: linked list
 * Returns: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h;
	dlistint_t *new;
	unsigned int i = 0;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		while (head)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new == NULL)
						return (NULL);
					new->n = n;
					new->next = head->next;
					new->prev = head;
					head->next = new;
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (new);
}
