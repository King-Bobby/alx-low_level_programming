#include "main.h"

/**
 * print_times_tables -  prints times table
 *
 * @n: integer
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int a;
	int b;
	int c;

	if (n >= 0 && n <=15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = (a * b);
				if (b ==0)
				{
					putchar('0' + c);
				}
				else
				{
					putchar(',');
					putchar(' ');
					if (c <= 9)
					{
						putchar(' ');
						putchar(' ');
						putchar('0' + c);
					}
					else if (c > 9 && c < 100)
					{
						putchar(' ');
						putchar('0' + (c / 10));
						putchar('0' + (c % 10));
					}
					else if (c >= 100)
					{
						putchar('0' + (c / 100));
						putchar('0' + ((c / 10) % 10));
						putchar('0' + (c % 10));
					}
				}
			}
			putchar('\n');
		}
	}
}

