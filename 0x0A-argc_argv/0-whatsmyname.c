#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * @argc: number of command line arguments
 * @argv: array of the command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
