#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	a = 48;
	b = 48;
	c = 48;

	while (c < 58)
	{
		b = 48;
		while (b < 58)
		{
			a = 48;
			while (a < 58)
			{
				if (c != b && c != a && b != a && c < b && b < a)
				{
					putchar(c);
					putchar(b);
					putchar(a);
					if (b == 56 && c == 55 && a == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				a++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
