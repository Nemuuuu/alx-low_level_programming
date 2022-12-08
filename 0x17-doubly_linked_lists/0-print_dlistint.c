#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint_t list
 * @h: head
 * 
 * Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
    dlistint_t *temp;
    int count = 0;
    temp = h;
    while (temp != NULL)
    {
        printf("%lu\n", temp->n);
        temp = temp->next;
        count++;
    }
    return count;
}