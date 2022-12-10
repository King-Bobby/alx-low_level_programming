#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphaBETS[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a < 52; a++)
	{
		putchar(alphaBETS[a]);
	}
	putchar('\n');
	return (0);
}
