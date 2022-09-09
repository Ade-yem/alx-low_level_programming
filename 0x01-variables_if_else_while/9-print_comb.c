#include <stdio.h>

/**
 * main - This program prints all possible combinations of
 * single-digit numbers.
 * Numbers are separated by a comma, printed in ascending order,
 * and is printed with putchar only.
 * Return: Always 0 (Success)
 */
int main(void)
{
       char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
