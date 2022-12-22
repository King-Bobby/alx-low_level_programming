#include "main.h"

/**
 * rot13 - encodes string using rot13
 * @s: string
 * Return: s
 */
char *rot13(char *s)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int a = 0;
	int b = 0;

	while (s[a] != '\0')
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == alpha[b])
			{
				s[a] = rot13[b];
				break;
			}
		}
		a++;
	}
	return (s);
}
