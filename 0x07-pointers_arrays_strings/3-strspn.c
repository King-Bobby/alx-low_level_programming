#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: number of bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int same = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				same++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (same);
			}
		}
		i++;
	}
	return (same);
}
