#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list list_t
 * @head: double pointer to list_t list
 * @str: string to add in the new node
 *
 * return: address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *tempo = *head;
	list_t *new_node;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tempo->next)
		tempo = tempo->next;

	tempo->next = new_node;

	return (new_node);
}
