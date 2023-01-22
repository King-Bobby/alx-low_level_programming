#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*solv)(int, int);
	int i = atoi(argv[1]);
	int j = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	solv = get_op_func(argv[2]);
	if (solv == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", solv(i, j));
	return (0);
}
