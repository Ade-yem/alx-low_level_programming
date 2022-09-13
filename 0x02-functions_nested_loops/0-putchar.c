#include "main.h"

/**
 * main - program that prints _putchar
 * Return: always return 0 on success
 */

int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; ch[i] != '\0'; i++)
		_putchar (ch[i]);

	_putchar('\n');
	return (0);
}
