#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table.
 * @size: array size.
 *
 * Return: pointer to the new hash table (Success), else
 * NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int j;

	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);

	h->size = size;
	h->array = malloc(sizeof(hash_node_t *) * size);
	if (h->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		h->array[j] = NULL;

	return (h);
}
