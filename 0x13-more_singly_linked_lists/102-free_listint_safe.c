#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listint_t *hptr, *new, *add, *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
		{
			free_listint2(&hptr);
			exit(98);
		}

		new->n = (int)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == (listint_t *)(add->n))
			{
				*h = NULL;
				free_listint2(&hptr);
				return (nnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}

	*h = NULL;
	free_listint2(&hptr);
	return (nnodes);
}
