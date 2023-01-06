#include "hash_tables.h"

/**
 * hash_table_create - creates a HashTable
 * 
 * Return: pointer to newly created HashTable
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    int i;
    hash_table_t *table = (hash_table_t*)malloc(sizeof(hash_table_t));
    table->array = (hash_node_t**) calloc (table->size, sizeof(hash_node_t*));
    table->size = size;
    
    for (i = 0; i < table->size; i++)
    table->array[i] = NULL;
    return table;
}
hash_node_t *createItem(const char* key, const char* value)
{
    hash_node_t *item =(hash_node_t*)malloc(sizeof(hash_node_t));
    item->key = (char*)malloc(strlen(key) + 1);
    item->value = (char*)malloc(strlen(value) + 1);

    strcpy(item->key, key);
    strcpy(item->value, value);
    return item;
}