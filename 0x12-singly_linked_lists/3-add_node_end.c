#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer
 * @str: string
 *
 * Return: address of new element on success, otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	return (*head);
}

/**
 * _strlen - length of string
 * @s: a pointer to an int that will be updated
 *
 * Return: i
 */
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
