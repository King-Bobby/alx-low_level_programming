#include "main.h"

/**
 * jack_bauer - movie 24
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				for (d = 48; d < 58; d++)
				{
					if (a > 49 && b > 51)
						break;
					putchar(a);
					putchar(b);
					putchar(58);
					putchar(c);
					putchar(d);
					putchar('\n');
				}
			}
		}
	}
}
