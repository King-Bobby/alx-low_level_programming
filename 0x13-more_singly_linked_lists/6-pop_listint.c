#include "lists.h"

/**
 * pop_listint - deletes the head node of a list 
 * @head: head of the list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
