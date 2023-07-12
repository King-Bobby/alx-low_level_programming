#include "search_algos.h"

/**
 * interpolation_search - performs interpolation search on array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is, or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
		  (value - array[low]));
	if (pos > size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	while ((array[high] != array[low]) && (value >= array[low]) &&
		   (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			  (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}
	if (array[low] == value)
		return (low);
	return (-1);
}
