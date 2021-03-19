#include "lists.h"

/**
 * list_len - determines length of a linked list
 * @h: pointer to head of linked list
 *
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 1; h->next != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
