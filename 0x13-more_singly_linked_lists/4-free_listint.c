#include "lists.h"

/**
 * free_listint - frees linked list listint_t
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tempVal;

	while (head)
	{
		tempVal = head->next;
		free(head);
		head = tempVal;
	}
}
