#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: head of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free((*head).str);
		free(head);
		head = (*head).next;
	}
}
