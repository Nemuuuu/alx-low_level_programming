#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t list
 * @head: pointer
 * @index: the index of the node starting from 0
 * 
 * Return: NULL if node doesn't exit
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    int i;
    dlistint_t *temp;
    if (head == NULL)
        return (NULL);
    else
    {
       temp = head;
       
       
    }
}
/**
 * main - check the code
 * 
 * Return: always 0
*/
int main(void)
{
    dlistint_t *head, *node;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 5);
    printf("%d\n", node->n);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS); 
}