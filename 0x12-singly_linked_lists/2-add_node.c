#include "lists.h"

/**
 * add_node - adds new node at the beginning of list_t list
 * @head: pointer to head of linked list
 * @str: string to place or assign to node.
 * Return: pointer to new element or head. NULL if fail.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newer_head;

	if (head == NULL)
	{
		return (NULL);
	}

	newer_head = malloc(sizeof(list_t));
	if (newer_head == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		newer_head->next = NULL;
	}
	else
	{
		newer_head->next = *head;
	}
	newer_head->str = strdup(str);
	newer_head->len = _strlen2(str);
	*head = newer_head;
	return (*head);
}

/**
 * _strlen2 - gives length of string
 * @s: string
 *
 * Return: length
 */

int _strlen2(const char *s)
{
	int v;

	v = 0;
	while (*s++)
	{
		v++;
	}
	return (v);
}


