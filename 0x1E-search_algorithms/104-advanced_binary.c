#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
int bi_search(int *array, size_t left, size_t right, int value);

/**
 * bi_search - Recursive binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @left: Leftmost index of the search range.
 * @right: Rightmost index of the search range.
 * @value: The value to search for.
 * Return: The index where the value is located, or -1 if not found.
 */
int bi_search(int *array, size_t left, size_t right, int value)
{
	if (left <= right)
	{
		size_t mid = left + (right - left) / 2;
		size_t i;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
			else
				return (bi_search(array, left, mid, value));
		}
		else if (array[mid] < value)
			return (bi_search(array, mid + 1, right, value));
		else
			return (bi_search(array, left, mid - 1, value));
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using the advanced binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (bi_search(array, 0, size - 1, value));
}

