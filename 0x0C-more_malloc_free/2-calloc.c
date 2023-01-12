#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of the array
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem = malloc(nmemb * size);
	if (mem == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < (nmemb * size); n++)
	{
		mem[n] = 0;
	}
	return (mem);
}
