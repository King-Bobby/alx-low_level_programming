#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 0;
	long b = 1;
	long c = 2;

	while (a < 50)
	{
		if (a == 0)
		{
			printf("%ld", b);
		}
		else if (a == 1)
		{
			printf(", %ld", c);
		}
		else
		{
			c = c + b;
			b = c - b;
			printf(", %ld", c);
		}
		++a;
	}
	printf("\n");
	return (0);
}
