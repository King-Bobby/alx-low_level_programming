#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int a = 0;
	int b = 0;
	int l1 = 0;
	int l2 = 0;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a])
	{
		l1++;
		a++;
	}
	while (s2[b])
	{
		l2++;
		b++;
	}
	cat = malloc(sizeof(char) * (l1 + l2 + 1));
	if (cat == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < l1; a++)
	{
		cat[a] = s1[a];
	}
	for (b = 0; b < l2; a++, b++)
	{
		cat[a] = s2[b];
	}
	return (cat);
}
