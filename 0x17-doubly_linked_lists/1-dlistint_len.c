#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked dlistint_t list
 * @h: head
 * 
 * Return: Number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
    int count = 0;
    dlistint_t *temp;
    temp = h;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}