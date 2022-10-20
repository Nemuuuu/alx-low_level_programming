#ifndef _SINGLY_LINKED_LISTS
#define _SINGLY_LINKED_LISTS

#include <stdio.h>
#include <stdlin.h>
#include <string.h>
#include <malloc.h>

/**
 * struct list_s - singly linked list
 * @str: malloced string
 * @len: length of the string
 * @next: pointes to the next node
 *
 * Description: single linked list node structure
 * for ALX project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
char *strdup(const char *s);
int _strlen(const char *s);

#endif
