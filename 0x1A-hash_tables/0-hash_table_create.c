#include "hash_tables.h"

/**
 * hash_table_create - creates the hash table
 * @size: size of the array
 *
 * Return: a pointer to the hash table
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **array;
	unsigned int i;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	new_table->size = size;
	new_table->array = array;
	return (new_table);
}
