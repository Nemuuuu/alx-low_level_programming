#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: key
*/
void hash_table_delete(hash_table_t *ht)
{
    int i;

    for (i = 0; i < ht->size; i++)
    {
        hash_node_t *cur_item = ht->array[i];
        if (cur_item != NULL)
            del_item(cur_item);
    }
    free(ht->array);
    free(ht);
}