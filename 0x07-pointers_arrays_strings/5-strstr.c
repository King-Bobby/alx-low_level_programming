#include "main.h"

/**
 * _strstr -  finds the first occurrence of the substring needle in the string haystack
 * @haystack: string
 * @needle: substring
 * Return: a pointer to first occurence or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
