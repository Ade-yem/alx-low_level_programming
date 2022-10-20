#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: linked list pointer
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));

	new->str = strdup(str);
	while (str[i] != '\0')
		i++;
	new->len = i;
	new->next = (*head);
	(*head) = new;
	return ((*head));
}
