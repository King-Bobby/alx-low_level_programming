#include "main.h"

/**
 * print_square -  prints a square in terminal
 * @size: integer value
 * Return: Always 0
 */

void print_square(int size)
{
	int i;
	int a;
	int c = 35;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (a = 1; a <= size; a++)
			{
				putchar(c);
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
