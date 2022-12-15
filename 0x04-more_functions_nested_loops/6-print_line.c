#include "main.h"

/**
 * print_line - prints a straight line in terminal
 * @n: number of times _ is printed
 * @i: integer value
 * @a: this is  the _ value
 * Return: Always 0
 */
void print_line(int n)
{
	char a = 95;
	int i;

	for (i = 1; i <= n; i++)
	{
		putchar(a);
	}
	putchar('\n');
}
