#include "main.h"

/**
 * _abs - absolute value
 *
 * @i: integer value
 *
 * Return: Absolute value
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (0);
	}
}
