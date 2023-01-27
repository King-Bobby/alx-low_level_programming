#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the list
 * @str: data for the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	(*new).str = strdup(str);
	(*new).len = strlen(str);
	(*new).next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while ((*temp).next != NULL)
			temp = (*temp).next;
		(*temp).next = new;
	}
	return (new);
}
