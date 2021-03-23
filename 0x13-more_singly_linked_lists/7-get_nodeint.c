#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: pointer to the head of list
 * @index: index of the node to return starting at 0
 *
 * Return: selected node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idxN;

	for (idxN = 0; idxN < index; idxN++)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
	}
	return (head);
}
