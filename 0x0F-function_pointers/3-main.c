#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int result, fn1, fn2;
        int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fn1 = atoi(argv[1]);
	fn2 = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = op(fn1, fn2);
	printf("%d\n", result);
	return (0);
}
