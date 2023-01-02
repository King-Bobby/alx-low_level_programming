#include "main.h"

/**
 * _memset - fills memory with a set variable
 * @s: pointer to desired memory
 * @b: constant byte
 * @n: number of times to print constant byte
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		putchar(b);
		if (i % 10)
		{
			putchar('\n');
		}
	}
	return (s);
}
