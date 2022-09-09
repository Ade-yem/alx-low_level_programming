#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 * without e and q.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
			putchar(x);
	}

	putchar('\n');

	return (0);
}
