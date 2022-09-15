#include "main.h"

/**
 * more_numbers - prints number 1 to 14 10 times.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j, tens;

		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				tens = j / 10;
				_putchar(tens + '0');
			}

			_putchar(j % 10 + '0');

		}

		_putchar('\n');
		i++;
	}

}
