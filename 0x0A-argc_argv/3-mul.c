#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: if arg<3 Error, followed by a new line, and return 1
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
	}
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
