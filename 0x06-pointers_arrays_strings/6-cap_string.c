#include "main.h"

/**
 * cap_string - capitalize string
 * @s: string
 * Return: Output
 */
char *cap_string(char *s)
{
	int a = 0;

	if (s[a] >= 97 && s[a] <= 122)
	{
		s[a] = s[a] - 32;
	}
	a++;

	while (s[a] != '\0')
	{
		if ((s[a] >= 97 && s[a] <= 122) && (s[a - 1] == ',' || 
			s[a - 1] == ';' || s[a-1] == '.' || s[a - 1] == '!' || 
			s[a - 1] == '?' || s[a - 1] == '"' || s[a - 1] == '(' || 
			s[a - 1] == ')' || s[a - 1] == '{' || s[a - 1] == '}' || 
			s[a -1] == ' ' || s[a -1 ] == '\t' || s[a -1] == '\n'))
		{
			s[a] = s[a] - 32;
		}
		a++;
	}
	return (s);
}
