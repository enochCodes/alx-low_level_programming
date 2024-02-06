#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to the pointer to the head of the linked list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode, *temp;

	lastNode = malloc(sizeof(listint_t));
	if (lastNode == NULL)
		return (NULL);

	lastNode->n = n;
	lastNode->next = NULL;

	if (*head == NULL)
	{
		*head = lastNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = lastNode;
	}
	return (lastNode);
}
