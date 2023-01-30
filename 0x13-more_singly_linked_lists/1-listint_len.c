#include "lists.h"

/**
 * listint_len - calculates the number of elements in a list
 * @h: head of the list
 * Return: number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
