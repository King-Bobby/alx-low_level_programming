#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char betalpha[] = "zyxwvutsrqponmlkjihgfedcba";
	int b;

	for (b = 0; b < 26; b++)
	{
		putchar(betalpha[b]);
	}
	putchar('\n');
	return (0);
}
