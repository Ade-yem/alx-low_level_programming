#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer, starting from
 * 00:00 to 23:59.
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int i, j;

	int a, b, c, d;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			a = (i / 10) + '0';
			b = (i % 10) + '0';
			c = (j / 10) + '0';
			d = (j % 10) + '0';
			_putchar(a);
			_putchar(b);
			_putchar(':');
			_putchar(c);
			_putchar(d);
			_putchar('\n');
		}
	}
}
