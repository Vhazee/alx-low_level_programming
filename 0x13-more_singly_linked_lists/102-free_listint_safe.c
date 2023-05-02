#include "lists.h"

/**
 * free_listint_safe - function frees a linked list
 * @h: pointer points to the first node in the linked list
 *
 * Return: number of elements on the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tempVal;
	int diffVal;
	size_t len = 0;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diffVal = *h - (*h)->next;
		if (diffVal > 0)
		{
			tempVal = (*h)->next;
			free(*h);
			*h = tempVal;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
