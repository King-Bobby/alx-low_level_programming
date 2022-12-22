#include "main.h"

/**
 * leet - replace some alphabets with numbers in a string
 * @s: string
 * Return: value of S
 */
char *leet(char *s)
{
	int b[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int c[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int m = 0;
	int n = 0;

	while (s[m] != '\0')
	{
		for (n = 0; n < 10; n++)
		{
			if (s[m] == b[n])
			{
				s[m] = c[n];
			}
		}
		m++;
	}
	return (s);
}
