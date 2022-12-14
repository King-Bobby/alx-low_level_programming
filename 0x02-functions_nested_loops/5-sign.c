#include "main.h"

/**
 * print_sign - print value if the number is greater, less or equal to -1
 *
 * @n: the number input
 *
 * Return: 1 is greater, 0 is equal and -1 is less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
	putchar('\n');
}
