#include "lists.h"

/**
 * sum_listint - sum of all the data of a listint
 * @head: pointer
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	unsigned int count = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
