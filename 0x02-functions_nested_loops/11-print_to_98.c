#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from input to 98
 *
 * @i: your input
 *
 * Return: Always 0
 */
void print_to_98(int i)
{
	while (i < 98)
	{
		printf("%d, ", i);
		i++;
	}
	while (i > 98)
	{
		printf("%d, ", i);
		i--;
	}	
	if (i == 98)
		printf("%d", i);

	printf("\n");
}
