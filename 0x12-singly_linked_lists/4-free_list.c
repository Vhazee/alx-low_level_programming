#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees linked list from memory
 * @head: list-t to be freed from memory
 */
void free_list(list_t *head)
{
	list_t *letGo;

	while (head)
	{
		letGo = head->next;
		free(head->str);
		free(head);
		head = letGo;
	}
}
