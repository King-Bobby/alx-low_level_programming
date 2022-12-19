#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string.
 * Return: nothing
 */
void puts_half(char *str)
{
	int a = 0;
	int n;

	while (a >= 0)
	{
		if (str[a] == '\0')
			break;
		a++;
	}
	if (a % 2 == 1)
	{
		n = a / 2;
	}
	else
	{
		n = (a - 1) / 2;
	}
	for (n++; n < a; n++)
	{
		putchar(str[n]);
	}
	putchar('\n');
}
