#include "main.h"

/**
 * _strlen - calculates length of a string
 * @s: string to be calculated
 * Return: Always 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}
