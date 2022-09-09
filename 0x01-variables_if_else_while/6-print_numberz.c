#include <stdio.h>

/**
 * main - This program prints numbers as strings
 * and uses the control loop for, and the function putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
