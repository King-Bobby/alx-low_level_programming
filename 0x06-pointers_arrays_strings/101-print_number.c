#include "main.h"

/**
 * print_number - prints numbers
 * @n: number to print
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int k;
	if (n < 0)
	{
		putchar('-');
		n = n * -1;
	}
	k = n;
	if (k / 10)
	{
		print_number(k / 10);
	}
	putchar(k % 10 + '0');
}
