#include "main.h"

/**
 * print_number - prints integer
 * @n: number
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n = n * -1;
		k = n;
		putchar('-');
	}

	k = k / 10;

	if (k != 0)
	{
		print_number(k);
	}

	putchar ((unsigned int) n % 10 + '0');
}
