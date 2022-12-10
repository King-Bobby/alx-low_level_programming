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

	a = 48;
	b = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (a == 57 && b == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
