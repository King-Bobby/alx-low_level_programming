#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of a list
 * @head: head of the list
 * @n: new data to add
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(struct dlistint_s));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	new->next = NULL;
	new->prev = temp;
	temp->next = new;
	return (new);
}
