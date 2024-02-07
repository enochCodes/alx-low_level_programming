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
	fast = (*h)->next;

	while (fast != NULL && fast < fast->next)
	{
		nodes++;
		printf("[%p] %d\n", (void *)slow, slow->n);

		temp = slow;
		slow = slow->next;
		free(temp);

		if (fast->next != NULL)
		{
			nodes++;
			printf("-> [%p] %d\n", (void *)fast, fast->n);

			temp = fast;
			fast = fast->next;
			free(temp);
		}
		else
		{
			nodes++;
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			*h = NULL;
			return (nodes);
		}
	}
	*h = NULL;
	return (nodes);
}

