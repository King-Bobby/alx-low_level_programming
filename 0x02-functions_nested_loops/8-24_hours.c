#include "main.h"

/**
 * jack_bauer - 24 hours
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int m = 0;
	int h = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			putchar('0' + (h / 10));
			putchar('0' + (h % 10));
			putchar(':');
			putchar('0' + (m / 10));
			putchar('0' + (m % 10));
			putchar('\n');
			m++;
		}
		m = 0;
		h++;
	}
}
