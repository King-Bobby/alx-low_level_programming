#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
