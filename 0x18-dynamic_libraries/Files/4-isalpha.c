#include "main.h"

/**
 * _isalpha - return 1 if c is a letter
 *
 * @c: The character in ASCII
 *
 * Return: 1 for letters, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
