#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data of a dlistint_t linked list
 * @head: pointer
 * 
 * Return: 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
    int summ = 0;
    dlistint_t *temp;
    if (head == NULL)
        return (0);
    else
    {
        temp = head;
        while (temp != NULL)
        {
            summ += temp->n;
            temp = temp->next;
        }
    }
    return summ;
}