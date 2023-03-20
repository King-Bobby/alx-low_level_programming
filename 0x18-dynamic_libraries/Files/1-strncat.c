#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters to add from source string
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a])
	{
		a++;
	}
	while (b < n && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a + n + 1] = '\0';
	
	return (dest);
}
