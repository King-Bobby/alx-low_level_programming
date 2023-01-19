#include "function_pointers.h"

/**
 * array_iterator - iterates an array
 * @array: array
 * @size: size of the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array != NULL && size >= 1 && action != NULL)
	{
		for (n = 0; n < size; n++)
		{
			action(array[n]);
		}
	}
}
