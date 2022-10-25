#include "lists.h"

/**
 * listint_len - print number of elements in a linked list
 * @h: head of linked list
 *
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
