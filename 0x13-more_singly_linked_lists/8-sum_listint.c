#include "lists.h"

/**
 * sum_listint - calculates sum of all the data in a list
 * @head: head of the list
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
