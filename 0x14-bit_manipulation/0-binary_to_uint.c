#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;
	len = len - 1;
	while (b[i])
	{
		if ((b[i] != 48) && (b[i] != 49))
			return (0);
		if (b[i] == 49)
			num += (1 * (1 << len));
		i++;
		len--;
	}
	return (num);
}
