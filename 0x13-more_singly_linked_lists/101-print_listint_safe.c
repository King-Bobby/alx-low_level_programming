#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp1, *temp2;
	int i = 0, count;

	temp1 = head;
	while (temp1 != NULL)
	{
		printf("[%p] %d\n", (void *)temp1, temp1->n);
		i++;
		temp1 = temp1->next;
		temp2 = head;
		count = 0;
		while (count < i)
		{
			if (temp1 == temp2)
			{
				printf("-> [%p] %d\n", (void *)temp1, temp1->n);
				return (i);
			}
			temp2 = temp2->next;
			count++;
		}
		if (head == NULL)
			exit(98);
	}
	return (i);
}
