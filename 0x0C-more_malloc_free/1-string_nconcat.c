#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters needed from s2
 * Return: pointer to allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *cat;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[a])
	{
		a++;
		b++;
	}
	while (s2[c])
	{
		c++;
		d++;
	}
	cat = malloc(sizeof(char) * (b + n + 1));
	a = 0;
	while (a < b)
	{
		cat[a] = s1[a];
		a++;
	}
	b = 0;
	while (b < n)
	{
		cat[a] = s2[b];
		a++;
		b++;
	}
	return (cat);
}
