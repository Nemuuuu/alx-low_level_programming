#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
    int i;

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            printf("{'%s': '%s', }", ht->array[i]->key, ht->array[i]->value);
        }
        else 
        printf("\nNothing inthe hash table\n");
    }
}