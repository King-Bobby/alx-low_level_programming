#include <stdio.h>

/**
 * main - check the code
 * @a: integer
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else
		{
			printf("%d", a);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
