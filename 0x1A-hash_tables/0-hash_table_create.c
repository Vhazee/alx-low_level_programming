#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htb;
	unsigned long int i;

	htb = malloc(sizeof(hash_table_t));
	if (htb == NULL)
		return (NULL);

	htb->size = size;
	htb->array = malloc(sizeof(hash_node_t *) * size);
	if (htb->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		htb->array[i] = NULL;
	return (htb);
}
