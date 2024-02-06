#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t linked list.
 * @head: A pointer to the pointer of the head of the linked list.
 * @n: The integer value to be stored in the new node.
 * Return: The address of the newly created node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
