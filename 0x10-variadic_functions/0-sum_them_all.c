#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: input
 * Return: returns the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list app;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(app, n); /* Initialize the argument list. */

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(app, unsigned int); /*Get next argument value*/

	va_end(app); /* Clean up. */
	return (sum);
}
