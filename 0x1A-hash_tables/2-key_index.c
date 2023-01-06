#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: key
 * @size: size of array of hash table
 * 
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long hash = 0;
    int i;

    for (i = 0; key[i]; i++)
    {
        hash += key[i];
    }
    return hash % size;
}