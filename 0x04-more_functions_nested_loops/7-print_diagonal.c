#include "main.h"

/**
 * print_diagonal - pints a diagonal line
 * @n: input value
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b < a; b++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
