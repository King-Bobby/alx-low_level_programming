#include "lists.h"

/**
 * sum_dlistint - adds all the data in the list
 * @head: head of the list
 * Return: the sum or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
