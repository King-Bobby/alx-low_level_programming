#include "main.h"

/**
 * _islower - returns 1 if c is lowercase
 *
 * Return: Returns 1 if c is lowercase, returns 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return(1);
	}
	else
	{
		return(0);
	}
	putchar('\n');
}
