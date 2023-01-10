#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to initialize with
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	
	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(c) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
