#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	unsigned int i = 0, c = 0, k;
	char formats[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		k = 0;
		while (formats[k])
		{
			if (format[i] == formats[k] && c)
			{
				printf("' ");
				break;
			} k++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double)), c = 1;
			break;
		case 's':
			str = va_arg(ap, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	va_end(ap), printf("\n");
}
