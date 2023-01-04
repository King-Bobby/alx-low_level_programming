#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
