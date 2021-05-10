#include "lists.h"

/**
 * dlistint_len - returns number of elem in dlistint_t list
 * @h: head of list
 *
 * Return: number of elem
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t v = 0;

	while (h)
	{
		h = h->next;
		v++;
	}
	return (v);
}
