#include "main.h"

/**
 * string_toupper - changes string from lowercase to uppercase
 * @s: string
 * Return: s
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] >= 97 && s[a] <= 122)
		{
			s[a] = s[a] - 32;
		}
		a++;
	}
	return (s);
}
