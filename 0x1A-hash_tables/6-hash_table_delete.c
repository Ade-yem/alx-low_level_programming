#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	hash_node_t *tmp1;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			tmp = ht->array[i];
			while ((tmp1 = tmp) != NULL)
			{
				free(tmp->key);
				free(tmp->value);
				free(tmp1);
				tmp = tmp->next;
			}
		}
		free(ht->array);
		free(ht);
	}
}
