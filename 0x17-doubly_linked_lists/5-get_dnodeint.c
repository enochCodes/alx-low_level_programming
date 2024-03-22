#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to return
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		if (i == index)
			return (current_node);
		i++;
		current_node = current_node->next;
	}
	return (NULL);
}
