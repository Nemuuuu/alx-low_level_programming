#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: key
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *next;
	unsigned long int index;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		for (ptr = ht->array[index]; ptr != NULL; ptr = next)
		{
			next = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
		}
	}
	free(ht->array);
	free(ht);
}
