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
	listint_t *current, *temp;
	size_t nodes = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		nodes++;
		printf("[%p] %d\n", (void *)current, current->n);

		if (current <= current->next && current->next != NULL)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			*h = NULL;
			return (nodes);
		}
		temp = current;
		current = current->next;
		free(temp);
	}
	*h = NULL;
	return (nodes);
}
