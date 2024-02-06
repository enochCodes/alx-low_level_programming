#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * print_listint - Function to print all the elements of a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
