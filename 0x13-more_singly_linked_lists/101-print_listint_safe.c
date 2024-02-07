#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *check;
	size_t count = 0;
	size_t i;

	current = head;
	
	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		
		check = head;

		for (i = 0; i < count; i++)
		{
			if (check == current->next)
			{
				printf("-> [%p] %d\n", (void *)current->next, current->next->n);
				return (count);
			}
			check = check->next;
		}
		current = current->next;
	}
	return (count);
}

