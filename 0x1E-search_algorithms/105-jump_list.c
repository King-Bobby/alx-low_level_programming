#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted singly linked list using
 *             the Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 * Return: A pointer to the first node where value is located,
 *         or NULL if value is not present or if list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	listint_t *prev = NULL;
	listint_t *current = list;

	if (current == NULL)
		return (NULL);

	while (current != NULL && current->n < value)
	{
		size_t i;

		prev = current;
		for (i = 0; i < step && current->next != NULL; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n != value && current->next == NULL)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);

	while (prev != NULL && prev->n <= value)
	{
		if (prev->n == value)
		{
			printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
			return (prev);
		}
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->next == NULL)
			break;
		prev = prev->next;
	}
	return (NULL);
}
