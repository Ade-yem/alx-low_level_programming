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
				tmp = tmp->next;
				free(tmp1->key);
				free(tmp1->value);
				free(tmp1);
			}
		}
		free(ht->array);
		free(ht);
	}
}
