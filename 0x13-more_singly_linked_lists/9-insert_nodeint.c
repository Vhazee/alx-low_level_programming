#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node in a linked list,
 * at a specified position
 * @head: pointer that points to the first node in the list
 * @idx: index where the new node is added
 * @n: data to be inserted into the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tempVal = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; tempVal && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = tempVal->next;
			tempVal->next = new;
			return (new);
		}
		else
			tempVal = tempVal->next;
	}
	return (NULL);
}
