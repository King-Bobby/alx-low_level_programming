#include <stdio.h>

/**
 * main- check the code
 *
 * Return: Always 0
 */
int main(void)
{
	long int a;
	long int b;

	a = 612852475143;

	for (b = 2; b <= a; b++)
	{
		if (a % b == 0)
		{
			a /= b;
			b--;
		}
	}
	printf("%ld\n", b);
	return (0);
}
