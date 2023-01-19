#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: the size of the array
 * @cmp: pointer to function
 * Return: if wrong, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array != NULL && size >= 1 && cmp != NULL)
	{
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]))
			{
				return (n);
			}
		}
	}
	return (-1);
}
