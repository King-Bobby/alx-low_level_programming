#include <stdio.h>

/**
 * print_alphabet - main
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char a;
	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}

