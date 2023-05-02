#include "lists.h"

/**
 * free_listint2 - frees memory for linked list
 * @head: a pointer that points to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tempVal;

	if (head == NULL)
		return;

	while (*head)
	{
		tempVal = (*head)->next;
		free(*head);
		*head = tempVal;
	}
	*head = NULL;
}
