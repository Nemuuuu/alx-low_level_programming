#include "main.h"

/**
 * add_node - adds a new at the beginning of a list_t list
 * @head: pointer to pointer
 * @str: string
 *
 * Return: address of the new element on success, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

/**
 * _strlen - length of a string
 * @s: pointer to an int that will be update
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
