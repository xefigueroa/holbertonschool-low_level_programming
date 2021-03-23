#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to head of list
 * @idx: index of list where new node will be added
 * @n: data node will contain
 *
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *oldNode = *head;
	unsigned int idxN;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = oldNode;
		*head = newNode;
		return (newNode);
	}

	for (idxN = 0; idxN < (idx - 1); idxN++)
	{
		if (oldNode == NULL || oldNode->next == NULL)
		{
			return (NULL);
		}

		oldNode = oldNode->next;
	}

	newNode->next = oldNode->next;
	oldNode->next = newNode;

	return (newNode);
}

