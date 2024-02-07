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

	while (fast != NULL && fast->next != NULL && fast != slow)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	if (fast == slow)
	{
		slow = *h;
		while (slow != fast)
		{
			temp = slow;
			slow = slow->next;
			free(temp);
			nodes++;
		}
	}

	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		nodes++;
	}

	return (nodes);
}

