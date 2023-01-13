#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previous memory block
 * @old_size: size of old memory block
 * @new_size: size of new memory block
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int n;
	char *new;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr = malloc(old_size);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
		{
			return (NULL);
		}
		return (new);
	}
	new = malloc(new_size);
	if (new == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < old_size && n < new_size; n++)
	{
		new[n] = ((char *)ptr)[n];
	}
	free(ptr);
	return (new);
}
