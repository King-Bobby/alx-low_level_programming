#include "search_algos.h"

/**
 * linear_search - performs a linear search on an array
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: number to search for
 * Return: index where value is on success, -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)

	return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	if (array[size - 1] != value)
		return (-1);

	return (1);
}
