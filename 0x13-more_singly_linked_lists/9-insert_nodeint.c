#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a node at a given position.
 * @head: Pointer to the head of the linked list.
 * @idx: Index where the new node should be added.
 * @n: Value to be stored in the new node.
 * Return: Address of the new node, or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *current = *head;
	unsigned int i;

	if (idx == 0)
		return (add_nodeint(head, n));

	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}

