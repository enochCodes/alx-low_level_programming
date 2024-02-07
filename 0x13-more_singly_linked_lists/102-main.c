#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		count++;
		if (current->next >= current)
		{
			printf("Freeing address [%p] would create a loop\n", (void *)current);
			*h = NULL;
			return (count);
		}
		temp = current;
		current = current->next;
		free(temp);
	}
	*h = NULL;
	return (count);
}
