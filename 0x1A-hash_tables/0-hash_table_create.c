#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table based on given size
 * @size: size is the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **array;
	hash_table_t *h_table;
	unsigned long int n;

	if (size == 0)
		return (NULL);

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	if (array == NULL)
	{
		free(h_table);
		return (NULL);
	}

	for (n = 0; n < size; n++)
		array[n] = NULL;

	h_table->size = size;
	h_table->array = array;
	return (h_table);
}
