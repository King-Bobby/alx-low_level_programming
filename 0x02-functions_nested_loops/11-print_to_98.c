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
	if (i < 99)
	{
		for (; i < 99; i++)
		{
			if (i == 0)
			{
				printf("%d\n", i);
				break;
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else
	{
		for (; i > 97; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
				break;
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
}
