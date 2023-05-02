#include "lists.h"

/**
 * add_nodeint_end - function adds a node to the end of a linked list
 * @head: pointer points to the first element in the list
 * @n: integer to be inserted into the new element
 *
 * Return: pointer to the new node, else NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tempVal = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tempVal->next)
		tempVal = tempVal->next;

	tempVal->next = new;

	return (new);
}
