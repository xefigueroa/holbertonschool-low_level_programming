#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to head of list
 *
 * Return: pointer to head of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prox, *prev = NULL;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	while ((*head)->next != NULL)
	{
		prox = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = prox;
	}

	(*head)->next = prev;

	return (*head);

}
