#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: substring
 * Return: A pointer to the matching byte or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
