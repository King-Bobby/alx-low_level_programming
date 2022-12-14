#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 1;
	int b = 1;
	int sum = 1;
	int sumE = 0;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
		{
			sumE = sumE + sum;
		}
	}
	printf("%d\n", sumE);
	return (0);
}
