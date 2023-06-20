#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
	unsigned long long i = 1, j = 2, next, k;

    	printf("%llu, %llu, ", i, j);
    	for (k = 3; k <= 98; k++)
    	{
        	next = i + j;
        	i = j;
        	j = next;
        	if (k != 98)
            		printf("%llu, ", next);
        	else
            		printf("%llu\n", next);
    	}
    	return (0);
}
