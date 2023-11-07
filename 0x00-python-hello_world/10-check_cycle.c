#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * check_cycle - a function in C that checks if a singly linked list has a cycle in it.
 * @list: pointer to head of a singly linked list
 *
 *Return: 0 if there is no cycle, 1 if there is a cycle.
 */

int check_cycle(listint_t *list)
{
	int n, i = 0;
	listint_t *current  = list, *head;

	while (current != NULL)
	{
		head = list;
		i++;
		for (n = 0; n < i; n++)
		{
			if (current->next == head)
				return (1);
			head = head->next;
		}
		current = current->next;
	}
	return (0);
}
