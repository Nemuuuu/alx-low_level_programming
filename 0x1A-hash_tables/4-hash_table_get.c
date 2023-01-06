#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * 
 * @ht: hash table you want to look into
 * @key: key you want to looking for
 * 
 * Return: value if succed, otherwise NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    int index = key_index(key, ht->size);
    hash_node_t *cur_value = ht->array[index];
    if (cur_value == NULL)
        return NULL;
    else
        {
            if (strcmp(cur_value->key, key))
                return cur_value->value;
        }
}