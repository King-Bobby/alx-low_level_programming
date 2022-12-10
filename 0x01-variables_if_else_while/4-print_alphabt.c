#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] ="abcdfghijklmnoprstuvwxyz";
	int a;

	for (a = 0; a < 24; a++)
	{
		putchar(alphabet[a]);
	}
	putchar('\n');
	return (0);
}
