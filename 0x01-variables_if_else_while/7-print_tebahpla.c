#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase in reverse
 * and uses the control loop for, and the function putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');
	return (0);
}
