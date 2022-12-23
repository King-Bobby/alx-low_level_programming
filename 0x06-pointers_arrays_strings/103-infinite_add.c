#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: size of r 
 * Return: If bigger than r, return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	size_r = sizeof(r);

	if (*n1 != '\0' && *n2 != '\0')
	{
		*r = *n1 + *n2;
		if (size_r > 0)
		{
			return (r);
		}
		else
		{
			return (0);
		}
	}
	return (r);
}
