#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int x, y, a, b;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			a = (x * y) / 10;
			b = (x * y) % 10;

			if ((x * y) > 9)
				_putchar(a + '0');

			_putchar(b + '0');


			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}


			if (y == 9 && x == 0)
				break;
			else if (x * (y + 1) < 10)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
