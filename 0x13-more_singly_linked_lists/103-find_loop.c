#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of the list
 * Return: The address of node where loop starts
 * or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp1, *temp2;

	temp1 = temp2 = head;

	while (temp1 != NULL && temp2 != NULL)
	{
		temp1 = temp1->next;
		temp2 = temp2->next->next;
		if (temp1 == temp2)
		{
			temp1 = head;
			while (temp1 != temp2)
			{
				temp1 = temp1->next;
				temp2 = temp2->next;
			}
			return (temp1);
		}
	}
	return (NULL);
}
