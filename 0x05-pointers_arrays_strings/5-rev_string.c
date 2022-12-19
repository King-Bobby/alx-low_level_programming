#include "main.h"

/**
 * _strlen - length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int l = 0;
	
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

/**
 * rev_string -  print a string and its reverse
 * @s: string
 * return: nothing
 */
void rev_string(char *s)
{
	int a = 0;
	int b = (_strlen(s) - 1);
	char c;

	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;
		--b;
	}
}
