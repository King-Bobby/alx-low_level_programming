#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int c;
	int n = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (1);
	}
	c = atoi(argv[1]);
	n += c / 25;
	c = c % 25;
	n += c / 10;
	c = c % 10;
	n += c / 5;
	c = c % 5;
	n += c / 2;
	c = c % 2;
	n += c / 1;
	
	printf("%d\n", n);
	return (0);
}
