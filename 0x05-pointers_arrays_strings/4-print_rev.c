#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * return: nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		++s;
	}
	s--;
	for (; len > 0; len--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
