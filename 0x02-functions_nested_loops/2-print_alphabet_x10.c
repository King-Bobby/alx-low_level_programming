#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabets in 10 lines
 *
 * Return: Always 0(Success)
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 97; b < 123; b++)
		{
			putchar(b);
		}
	putchar('\n');
	}
}
