#include "search_algos.h"

/**
 * exponential_search - performs exponential search on an array
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: index where the value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, left, right, mid, i;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);

	bound = 1;
	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < size) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
