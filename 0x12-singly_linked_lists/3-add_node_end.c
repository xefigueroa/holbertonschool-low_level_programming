#include "lists.h"

/**
 * add_node_end - add new node at end of list_t list
 * @head: pointer to head or first node of linked list
 * @str: string to add to linked list
 *
 * Return: address of new element. NULL if fail.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *new_ls;

	if (str != NULL)
	{
		new_ls = malloc(sizeof(list_t));
		if *new_ls == NULL)
		{
			return (NULL);
		}

		new_ls->str = strdup(str);
		new_ls->len = _strlen(str);
		new_ls->next = NULL;

		if (*head == NULL)
		{
			*head = new_ls;
			return (*head);
		}
		else
		{
			tmp = *head;
			while (tmp->next)
			{
				tmp = tmp->next;
			}

			tmp->next = new_ls;
			return (tmp);
		}
	}
	return (NULL);
}
