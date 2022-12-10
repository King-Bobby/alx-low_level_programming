#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = a; c < 58; c++)
			{
				for (d = b + 1; d < 58; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);

					if (!((a == 57 && b == 56) && (c == 57 && d == 57)))
					{
						putchar(',');
						putchar(' ');
					}
				}
				d = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
