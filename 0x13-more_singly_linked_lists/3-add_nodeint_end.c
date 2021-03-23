#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: pointer to head of list
 * @n: value for node
 *
 * Return: address to new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tail;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
	return (*head);
}
