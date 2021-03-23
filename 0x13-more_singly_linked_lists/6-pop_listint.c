#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to head of a list
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int dat;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	dat = (*had)->n;
	*head = (*head)->next;

	free(temp);

	return (dat);
}
