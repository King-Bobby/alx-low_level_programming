#include "main.h"

/**
 * more_numbers - prints 10 times, numbers from 0-14
 * Return: Always 0
 */
void more_numbers(void)
{
	int n;
	int i;

	for (n = 48; n < 58; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				putchar((i / 10) + 48);
			}
			putchar((i % 10) + 48);
		}
		putchar('\n');
	}
}

