#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	char s[] = "[0] (nil)";
	unsigned int i, j, k, l;
	char *t;

	while (h)
	{
		j = 1;
		if (h->str == NULL)
		{
			for (i = 0; s[i] != '\0'; i++)
				_putchar(s[i]);
			_putchar('\n');
		}
		else
		{
			t = h->str;
			k = h->len;
			l = (k % 10) + '0';
			_putchar('[');
			_putchar(l);
			_putchar(']');
			_putchar(' ');
			for (i = 0; t[i] != '\0'; i++)
				_putchar(t[i]);
			_putchar('\n');
		}
		h = h->next;
		j++;
	}
	return (j);
}
