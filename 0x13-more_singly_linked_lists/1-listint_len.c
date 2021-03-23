#include "lists.h"

/**
 * listint_len - returns number of elements in linked list
 * @h: pointer to head of string
 *
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int v;

	if (h == NULL)
	{
		return (0);
	}

	for (v = 0; h != NULL; v++)
	{
		h = h->next;
	}

	return (v);
}
