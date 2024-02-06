#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - the function count the nodes in the list
 * @h: node ptr
 * Return: the no nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
