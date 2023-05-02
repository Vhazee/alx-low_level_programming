#include "lists.h"

/**
 * reverse_listint - function reverses a linked list
 * @head: pointer points to the first node in the list
 *
 * Return: pointer points to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextVal = NULL;
	listint_t *prevVal = NULL;

	while (*head)
	{
		nextVal = (*head)->next;
		(*head)->next = prevVal;
		prevVal = *head;
		*head = nextVal;
	}

	*head = prevVal;
	return (*head);
}
