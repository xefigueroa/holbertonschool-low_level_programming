#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of list
 * @head: pointer to head of list
 * @index: index of node
 *
 * Return: NULL or nth node of list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int v = 0;

	while (head)
	{
		if (v == index)
		{
			return (head);
		}

		head = head->next;
		v++;
	}
	return (NULL);
}
