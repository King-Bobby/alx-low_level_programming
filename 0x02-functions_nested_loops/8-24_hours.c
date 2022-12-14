#include "main.h"

/** 
 * jack_bauer - 24 hours
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;
	
	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a < 2 && b < 10) || (a < 3 && b < 4))
			{
				for (c = 0; c < 6; c++)
				{
					for (d = 0; d < 10; d++)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(58);
						putchar(c + '0');
						putchar(d + '0');
						putchar('\n');
					}
				}
			}
		}
	}
}
