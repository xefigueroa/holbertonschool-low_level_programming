#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of linked list
 *
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int v;

	if (h == NULL)
	{
		return (0);
	}
	for (v = 0; h != NULL; v++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (v);
}
