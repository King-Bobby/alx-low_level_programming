#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: head of the list
 * @index: index of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < (index - 1) && temp != NULL; i++)
		temp = temp->next;

	if (i != (index - 1) || temp->next == NULL)
		return (-1);

	temp2 = temp->next;
	temp->next = (temp->next)->next;
	free(temp2);
	return (1);
}
