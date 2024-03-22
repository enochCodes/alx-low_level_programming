#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - print the number of the node element
 * @h: Pointer to the head of the list
 *  Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cuttent = h;
	size_t node_count = 0;

	while (cuttent != NULL)
	{
		node_count++;
		cuttent = cuttent->next;
	}
	return (node_count);
}
