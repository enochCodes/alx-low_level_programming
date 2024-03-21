#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - Frees a listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *temp;
	size_t nodes = 0;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = *h;

	while ( fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		nodes++;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = *h;
			while (slow != fast)
			{
				nodes++;
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				temp = slow;
				slow = slow->next;
				free(temp);
			}
			*h = NULL;
			return (nodes);
		}
	}
	slow = *h;
	while (slow != NULL)
	{
		nodes++;
		printf("[%p] %d\n", (void *)slow, slow->n);
		temp = slow;
		slow = slow->next;
		free(temp);
	}

	*h = NULL;
	return (nodes);
}
