#include <stdio.h>

/**
 * main - check the code
 *
 * Return: ALways 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b = b + a;
	}
	printf("%d\n", b);
	return (0);
}
