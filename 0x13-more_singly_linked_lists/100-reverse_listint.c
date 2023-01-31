#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1 = NULL, *temp2 = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head =!= NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp1;
		temp1 = *head;
		*head = temp2;
	}
	(*head) = temp1;
	return (*head);
}
