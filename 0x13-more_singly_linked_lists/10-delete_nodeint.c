#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at indexof a linked list
 * @head: pointer to head of a linked list
 * @index: index of node to be deleted
 *
 * Return: 1 (success) -1 (fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *oldNode = *head;
	unsigned int idxN;

	if (oldNode == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(oldNode);
		return (1);
	}

	for (idxN = 0; idxN < (index - 1); idxN++)
	{
		if (oldNode->next == NULL)
		{
			return (-1);
		}
		oldNode = oldNode->next;
	}

	temp = oldNode->next;
	oldNode->next = temp->next;
	free(temp);
	return (1);
}
