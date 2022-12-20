#include "main.h"

/**
 * _atoi - converts string to integer.
 * @s: string.
 * Return: Always 0
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, a = 0, b = 1, c = 1, i;
	
	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
		{
			break;
		}
		if (*(s + count) == '-')
		{
			b = b * -1;
		}
		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
			{
				c = c * 10;
			}
			size++;
		}
		count++;
	}
	for (i = count - size; i < count; i++)
	{
		a = a + ((*(s + i) - 48) * c);
		c = c / 10;
	}
	return (a * b);
}
