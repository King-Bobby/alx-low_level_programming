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
	int ld;

	ld = d % 10;

	if (ld < 0)
	{
		ld = ld * -1;
	}
	putchar(ld + '0');
	return (ld);
}
