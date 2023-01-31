#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: head of the list
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *temp2;
	size_t i = 0;

	if (h == NULL)
		return (0);

	temp = *h;
	while (temp != NULL)
	{
		i++;
		temp2 = temp;
		temp = temp->next;
		free(temp2);
		if (temp2 < temp)
			break;
		*h = NULL;
	}
	return (i);
}
