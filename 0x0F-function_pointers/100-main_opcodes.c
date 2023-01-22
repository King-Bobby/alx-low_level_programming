#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: if some parameters are not correct print "Error"
 */
int main(int argc, char *argv[])
{
	char *opcode = (char *) main;
	int a, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (a = 0; a < bytes; a++)
	{
		printf("%02x", opcode[a] & 0xFF);
		if (a != bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
