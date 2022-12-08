#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer
*/
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp, *temp2;
    temp = head;
    while (temp != NULL)
    {
        temp2 = temp;
        temp = temp->next;
        head = temp2->next;
        head->prev = NULL;
        free(temp2);
        printf("List freed\n");
    }

}