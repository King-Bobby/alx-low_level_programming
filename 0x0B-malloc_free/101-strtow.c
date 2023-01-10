#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: string
 * Return: a pointer to an array of strings, or NULL otherwise
 */
char **strtow(char *str)
{
	if (str == NUL || str == "")
	{
		return (NULL);
	}

