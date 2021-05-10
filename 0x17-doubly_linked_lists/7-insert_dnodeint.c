#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at given position
 * @h: pointer to head of list
 * @idx: index of list where new node will be added
 * @n: int value of new node
 *
 * Return: address of new node or NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *node;

	if (!h || !newNode)
	{
		return (newNode ? free(newNode), NULL : NULL);
	}

	node = *h;
	newNode->n = n;

	if (!idx)
	{
		newNode->prev = NULL;
		newNode->next = node ? node : NULL;
		if (node)
		{
			node->prev = newNode;
		}
		return (*h = newNode);
	}

	for (; node; node = node->next, idx--)
	{
		if (idx - 1 == 0)
		{
			newNode->prev = node;
			newNode->next = node->next;
			if (newNode->next)
			{
				newNode->next->prev = newNode;
			}
			node->next = newNode;

			return (newNode);
		}
	}
	return (free(newNode), NULL);
}
