#include "main.h"

int compare(char *front, char *end);
int _strlen(char *s);

/**
 * compare - compare if the number from the front and end match
 * @front: number counting from the first character
 * @end: num counting from the last character, moving backwards
 * Return: 1 if palindrome, 0 if not
 */

int compare(char *front, char *end)
{
	if (front >= end)
	{
		return (1);
	}
	if (*front == *end)
	{
		return (compare(front + 1, end - 1));
	}
	return (0);
}

/**
 * _strlen - length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);
	
	return (compare(s, (s + len - 1)));
}
