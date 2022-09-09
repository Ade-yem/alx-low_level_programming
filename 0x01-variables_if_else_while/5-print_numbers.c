#include <stdio.h>

/**
 * main - This program prints the numbers from
 * 0 to 9 and then a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		printf("%d", x);

	putchar ('\n');

	return (0);
}
