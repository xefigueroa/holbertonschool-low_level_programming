#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of list
 * @head: pointer to head of list
 * @n: int value for new node
 *
 * Return: address of new elem or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *node;

	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		node = *head;
		while (node->next)
		{
			node = node->next;
		}

		node->next = newNode;
		newnode->prev = node;
	}
	return (newNode);
}
