#include "main.h"

/**
 * times-tables - multiplication table
 *
 * times-tables: prints times tables
 *
 * Return: nothing
 */
void times_table(void)
{
	int r;
	int c;
	int a;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			a = (r * c);

			if (c == 0)
			{
				putchar('0' + a);
			}
			else if (a < 10)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar('0' + a);
			}
			else if (a > 9)
			{
				putchar(',');
				putchar(' ');
				putchar('0' + (a / 10));
				putchar('0' + (a % 10));
			}
		}
		putchar('\n');
	}
}
