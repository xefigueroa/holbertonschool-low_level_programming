#include "hash_tables.h"

/**
 * hash_table_create - creates hash table.
 * @size: size of array.
 *
 * Return: pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int v;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL) /* return condition */
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL) /* return condition */
	{
		return (NULL);
	}

	for (v = 0; v < size; v++)
	{
		ht->array[v] = NULL;
	}

	return (ht);
}
