#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes a node on a linked list
 * at a certain index
 * @head: pointer pointing to the first element in the list
 * @index: index of node to delete
 *
 * Return: 1 if Successful, or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *currentVal = NULL;
	listint_t *tempVal = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempVal);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tempVal || !(tempVal->next))
			return (-1);
		tempVal = tempVal->next;
		i++;
	}


	currentVal = tempVal->next;
	tempVal->next = currentVal->next;
	free(currentVal);
	return (1);
}
