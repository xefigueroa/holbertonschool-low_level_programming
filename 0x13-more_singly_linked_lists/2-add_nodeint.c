#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining of list
 * @head: pointer to head of linked list
 * @n: data to add to node
 *
 * Return: address to new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		newNode->head = NULL;
	}
	else
	{
		newNode->next = *head;
	}

	newNode->n = n;
	*head = newNode;

	return (*head);
}
