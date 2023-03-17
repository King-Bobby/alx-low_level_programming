#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at the given index
 * @head: head of the list
 * @index: given index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;

	if (*head == NULL || head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	while ((index != 0) && (temp->next != NULL))
	{
		index -= 1;
		temp = temp->next;
		if (index == 0)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
