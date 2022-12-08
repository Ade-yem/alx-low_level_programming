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

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
