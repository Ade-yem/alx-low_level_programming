#include <stdio.h>

/**
 * main - This program prints all the numbers of base 16
 * in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char i;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
