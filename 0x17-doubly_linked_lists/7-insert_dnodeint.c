#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a node at index
 * @h: head of the list
 * @idx: index
 * @n: data to insert
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n)); /* adds node at the beginning */
	else if (idx == 1)
		return (add_dnodeint_end(h, n)); /* adds node at the end */

	new = malloc(sizeof(struct dlistint_s));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	while (idx && temp->next)
	{
		idx--;
		temp = temp->next;
		if (idx == 0)
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
	}
	return (NULL);
}
