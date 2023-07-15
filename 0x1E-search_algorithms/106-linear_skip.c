#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present or if list is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express = list, *current = NULL;

	if (list == NULL)
		return (NULL);
	if (express->n == value)
	{
		printf("Value checked at index [0] = [%d]\n", express->n);
		printf("Value found between indexes [0] and [0]\n");
		return (express);
	}
	while (express->express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				express->express->index, express->express->n);
		if (express->express->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					express->index, express->express->index);
			break;
		}
		express = express->express;
	}
	if (!express->express)
	{
		current = express;
		while (current && current->next)
			current = current->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
				express->index, current->index);
	}
	current = express;
	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
