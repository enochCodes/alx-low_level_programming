#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - finds the start of a loop in a linked list
 * @head: pointer to the head of the linked list
 * Return: If there is no loop, return NULL. Otherwise, return
 * the start of the loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
		return (NULL);
	slow = head;
	fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}

