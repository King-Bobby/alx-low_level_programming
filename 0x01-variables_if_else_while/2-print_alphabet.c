#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ALPHABETS[] = "abcdefghijklmnopqrstuvwxyz";
	int a;
	for  (a = 0; a < 26; a++)
	{
		putchar(ALPHABETS[a]);
	}
	putchar('\n');
	return (0);
}
