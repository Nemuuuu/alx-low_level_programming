#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer
 * @n: elements of the list
 * 
 * Return: address of the new element, otherwise NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *temp, *temp2, *temp3;
    temp = malloc(sizeof(dlistint_t));
    temp->n = n;
    temp->prev = NULL;
    temp->next = NULL;
    if (*head == NULL)
    {
        *head = temp;
    }
    else
    {
        dlistint_t *temp2;
        temp2 = *head;
        while (temp2 != NULL)
        {
           temp3 = temp2;
           temp2 = temp2->next;
        }
        temp2 = temp;
        temp3->next = temp;
        temp->prev = temp3;
    }
}