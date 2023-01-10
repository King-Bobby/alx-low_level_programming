#include "main.h"

/**
 * _strdup - returns a pointer to a new string, which is a copy of str
 * @str: a string
 * Return: a pointer to duplicate string, or NULL otherwise
 */
char *_strdup(char *str)
{
	char *cp;
	int a = 0;
	int b = 0;
	
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[a])
	{
		b++;
		a++;
	}
	cp = malloc(sizeof(char) * b);
	if (cp == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < b; a++)
	{
		cp[a] = str[a];
	}
	return (cp);
}
