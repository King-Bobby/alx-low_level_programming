#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	for (i = 1; i < argc; i++)
	{
		if (!(*argv[i] >= '0' && *argv[i] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
