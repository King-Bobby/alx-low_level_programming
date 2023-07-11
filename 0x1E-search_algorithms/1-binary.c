#include "search_algos.h"

/**
 * binary_search - performs binary search on an array
 * @array: a pointer to the first element of the array
 * @size: number of elements in the array
 * @value: number to search for
 * Return: index where value is located on sucess, -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1;
	int middle;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	if ((left == right) && (middle != value))
		return (-1);
	return (-1);
}
