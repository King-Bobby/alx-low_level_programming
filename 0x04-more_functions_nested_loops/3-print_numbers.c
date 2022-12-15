#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 * @n: number
 * Return: Always 0
 */

void print_numbers(void)	
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
