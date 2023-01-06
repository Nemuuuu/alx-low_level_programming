#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with key
 * 
 * Return: 1 if succeed, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *item = createItem(key, value);
    int index = key_index(key, ht->size);
    hash_node_t *cur_val = ht->array[index];

    if (cur_val == NULL)
    {
        ht->array[index] = cur_val;    
    }
    else
    {
        if (strcmp(cur_val->key, key) == 0)
        {
            strcpy(ht->array[index]->value, value);
            return 0;
        }
        else
        {
            //handleCollision(ht, index, cur_val);
            return 0;
        }
    }
}