#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int a = 0;
	int *ar;

	if (min > max)
	{
		return (NULL);
	}
	ar = malloc(sizeof(int) * ((max - min) + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		ar[a] = min;
		a++;
		min++;
	}
	return (ar);
}
