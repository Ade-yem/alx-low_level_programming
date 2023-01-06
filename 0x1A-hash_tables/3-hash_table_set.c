#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *result;

	if (!ht)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);

	index = key_index(key, ht->size);
	result = hash_arr(&ht->array[index], key, value);
	if (result)
		return (1);
	else:
		return (0);

}
/**
 * hash_arr - function to add array.
 * @arr: the array from the table
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key
 * Return: the array with its value set
 */

hash_node_t *hash_arr(hash_node_t **array, const char *key, const char *value)
{
	hash_node_t *arr = *array;

	strcpy(arr->key, key);
	arr->value = value;

	if (first[key] == NULL)
    {
       first[key] = newptr;
    }
    // check for insertion at tail
    else
    {
        node* predptr = first[key];
        while (true)
        {
            // insert at tail
            if (predptr->next == NULL)
            {
                predptr->next = newptr;
                break;
            }

            // update pointer
            predptr = predptr->next;
        }
    }
