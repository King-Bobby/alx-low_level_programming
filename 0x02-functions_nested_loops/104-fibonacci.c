#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int c, o;
	long a1, a2, b1, b2, total1, total2;
	unsigned long a = 1;
	unsigned long b = 1;
	unsigned long total = 0;

	printf("1");

	for (c = 2; c < 93; c++)
	{
		total = a + b;
		a = b;
		b = total;
		printf(", %lu", total);
	}
	a1 = a / 1000000000;
	a2 = a % 1000000000;
	b1 = b / 1000000000;
	b2 = b % 1000000000;

	for (; c < 99; c++)
	{
		o = (a2 + b2) / 1000000000;
		total2 = (a2 + b2) - (1000000000 * o);
		total1 = (a1 + b1) + o;
		printf(", %lu%lu", total1, total2);
		a1 = b1;
		a2 = b2;
		b1 = total1;
		b2 = total2;
	}
	printf("\n");
	return (0);
}
