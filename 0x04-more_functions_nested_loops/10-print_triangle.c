#include "main.h"

/**
 * print_triangle - prints triangle in terminal
 * @size: size of triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= (size - a); b++)
			{
				putchar(' ');
			}
			for (c = 1; c <= a; c++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
