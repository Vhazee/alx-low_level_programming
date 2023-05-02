#include "lists.h"

/**
 * listint_len - function returns number of elements in linked lists
 * @h: type listint_t linked list to traverse
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t value = 0;

	while (h)
	{
		value++;
		h = h->next;
	}

	return (value);
}

