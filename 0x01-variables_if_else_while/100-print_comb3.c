#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;
	a = 48;
	b = 48;

	while (a < 58)
	{
		b = 48;
		while (a < 58)
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
			a++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
