#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to pointer
 * @n: elements to be added inthe list
 * 
 * Return: address of the new element, NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *temp, *temp2;
    temp = malloc(sizeof(dlistint_t));
    temp->n = n;
    temp->prev = NULL;
    temp->next = NULL;
    if (*head == NULL)
    {
        *head = temp;
        printf("first element added\n");
    }
    else
    {
        temp2 = *head;
        *head = temp;
        temp->next = temp2;
        temp2->prev = temp;
        printf("element added\n");
    }
    return (*head);
}