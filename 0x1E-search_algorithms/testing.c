#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int recursive_binary_search(int *array, size_t left, size_t right, int value);

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

    return recursive_binary_search(array, 0, size - 1, value);
}

/**
 * recursive_binary_search - Recursive binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @left: Leftmost index of the search range.
 * @right: Rightmost index of the search range.
 * @value: The value to search for.
 * Return: The index where the value is located, or -1 if not found.
 */
int recursive_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

    if (left > right)
        return -1;

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
    {
        if (mid == left || array[mid - 1] < value)
            return mid;
        else
            return recursive_binary_search(array, left, mid, value);
    }
    else if (array[mid] < value)
    {
        return recursive_binary_search(array, mid + 1, right, value);
    }
    else
    {
        return recursive_binary_search(array, left, mid - 1, value);
    }
}

