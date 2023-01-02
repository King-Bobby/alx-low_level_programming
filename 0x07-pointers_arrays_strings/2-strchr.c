#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: character
 * Return: C if found and NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
