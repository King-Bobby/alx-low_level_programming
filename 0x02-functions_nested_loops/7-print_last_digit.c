#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @d: number
 *
 * Return: last digit
 */
int print_last_digit(int d)
{
	int n;

	n = d % 10;
	if (n < 0)
	{
		putchar(-1 + 48);
		return (-1);
	}
	else
	{
		putchar(1 + 48);
		return (1);
	}
}
