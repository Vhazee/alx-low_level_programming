#include "lists.h"

/**
 * get_nodeint_at_index - function returns a node at index in a linked list
 * @head: pointer to first node in the linked list
 * @index: index of node to return
 *
 * Return: pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tempVal = head;
	unsigned int i = 0;

	while (tempVal && i < index)
	{
		tempVal = tempVal->next;
		i++;
	}
	return (tempVal ? tempVal : NULL);
}
