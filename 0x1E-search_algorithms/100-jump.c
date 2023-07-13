#include "search_algos.h"

/**
 * jump_search - performs jump search algorithm on an array
 * @array: a pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where the value is, or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	double square_root = sqrt(size);
	size_t i, j, prev = 0, step = (size_t)square_root;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i = i + step)
	{
		if (array[i] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			prev = i;
			if ((array[i] == array[size - 1]) && (array[size - 1] != value))
			{
				printf("Value found between indexes [%ld] and ", prev);
				printf("[%ld]\n", (i + step));
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			}
		}
		else if (array[i] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, i);
			for (j = prev; j <= i; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}
	if ((i >= size) && (array[size - 1] != value))
	{
		printf("Value found between indexes [%ld] and [%ld]\n", prev, i);
		for (j = prev; j < i; j++)
		{
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
			if (array[j] == value)
				return (j);
		}
	}
	return (-1);
}
