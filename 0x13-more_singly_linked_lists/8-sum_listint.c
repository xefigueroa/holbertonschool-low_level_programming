#include "lists.h"

/**
 * sum_listint - returns sum of all the data of a linked list
 * @head: pointer to head of list
 *
 * Return: sum of all data or 0
 */

int sum_listint(listint_t *head)
{
	int tot = 0;

	while (head)
	{
		tot = tot + head->n;
		head = head->next;
	}

	return (tot);
}
