#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of the list
 * @index: index of the list
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	else 
	{
		while (n < index)
		{
			head = head->next;
			n++;
		}
	}
	if (n == index)
		return (head);

	return (NULL);
}
