#include "lists.h"

/**
 * sum_dlistint - returns sum of all data (n) of list
 * @head: pointer to head of list
 *
 * Return: sum of all data (n) or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
