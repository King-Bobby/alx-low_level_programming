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
	if (d < 0)
	{
		d = d * -1;
	}
	putchar('0' + (d % 10));
	return(d % 10);
}
