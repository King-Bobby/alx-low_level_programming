#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at index
 * @head: head of the list
 * @index: is the index os the node, starting from 0
 * Return: the node at index or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (index && head->next)
	{
		head = head->next;
		index--;
	}
	if (index == 0)
		return (head);
	
	return (NULL);
}
